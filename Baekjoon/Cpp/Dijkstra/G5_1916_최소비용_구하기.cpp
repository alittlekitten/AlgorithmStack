#include <iostream>
#include <queue>
#include <vector>
using namespace std;


vector<pair<int, int>> v[1001]; // 간선 담은 벡터
int dist[1001]; // 최단거리 배열

void dijkstra(int start) {
    for (int i = 0; i < 1001; ++i) {
        dist[i] = 100000000; // 하나의 간선의 길이가 1 이상 100000 이하이고, 최악의 경우 999개의 간선을 통해 도시가 연결될 수 있으므로 99900000을 초과하는 값이 들어가야 하므로 1억을 대입
    }

    // pd를 사용하기 때문에 굳이 방문 여부를 확인하지 않아도 된다! (어짜피 이미 최소값이 등록되었기 때문에 pq로 해당 도착점이 새롭게 추가 될 일이 없기 때문!!)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 오름차순 pq 등록 (pair 앞은 weight, 뒤는 vertex - 도착점)
    pq.push(make_pair(0, start)); // 시작점 등록

    while (!pq.empty()) {
        int w = pq.top().first; // 가장 우선순위가 높은 점의 dist를 추출해서 w에 저장
        int curr = pq.top().second; // 가장 우선순위가 높은 vertex를 curr에 등록
        pq.pop(); // 값을 추출했으니 pq에서 제거
        
        if (dist[curr] < w) continue; // w가 기존 비용보다 크면 통과
        for (int i = 0; i < v[curr].size(); ++i) { // curr에서 시작하는 간선을 모두 탐색
            int nextw = w + v[curr][i].first; // 그 간선으로 연결된 도착 vertex까지의 거리 (다익스트라 시작점 ~ start까지는 반드시 최단거리)
            int nextv = v[curr][i].second; // 그 간선의 도착 vertex
            if (nextw < dist[nextv]) { // 만약 기존 최단거리보다 더 짧은 거리로 해당 도착지점에 도착할 수 있다면
                dist[nextv] = nextw; // dist 최단거리 배열값 업데이트
                pq.push(make_pair(nextw, nextv)); // 추가 업데이트를 위해 업데이트된 거리와 도착지점 pq에 등록
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1916 최소비용 구하기
    // 다익스트라

    int n, m, start, end, w;
    cin >> n >> m;

    // 연결된 간선 등록
    for (int i = 0; i < m; ++i) {
        cin >> start >> end >> w;
        v[start].push_back(make_pair(w, end));
    }

    // 출발점과 끝점 입력받기
    int s, e;
    cin >> s >> e;

    // 다익스트라 구하기 (s부터 시작하는 최단경로 계산)
    dijkstra(s);

    cout << dist[e]; // s부터 e까지 가는 최소비용 출력

    return 0;
}
