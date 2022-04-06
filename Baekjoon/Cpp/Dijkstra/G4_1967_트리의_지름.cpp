#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>> v[10001];
int dist[10001];

void dijkstra(int start) {
    for (int i = 1; i < 10001; ++i) {
        dist[i] = 1000001;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 오름차순 pq 등록 (pair 앞은 weight, 뒤는 vertex - 도착점)
    pq.push(make_pair(0, start)); // 시작점 등록
    dist[start] = 0;

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
    cin.tie(0);
    cout.tie(NULL);

    // 1967 트리의 지름
    // 다익스트라 * 2
    // 루트에서 제일 먼 곳을 다익스트라로 찾고, 제일 먼 곳에서 또 제일 먼 곳을 다익스트라로 찾아서 그 거리를 구하면 된다!
    int n, a, b, c;
    cin >> n;
    for (int i = 0; i < n -1 ; ++i) {
        cin >> a >> b >> c;
        v[a].push_back(make_pair(c, b));
        v[b].push_back(make_pair(c, a));
    }

    dijkstra(1);
    
    int maxValue = -1;
    int maxVertex = -1;
    for (int i = 1; i <= n; ++i) {
        if (dist[i] > maxValue) {
            maxValue = dist[i];
            maxVertex = i;
        }
    }

    dijkstra(maxVertex);

    maxValue = -1;
    for (int i = 1; i <= n; ++i) {
        if (dist[i] > maxValue) maxValue = dist[i];
    }

    if (maxValue == 1000001) cout << -1;
    else cout << maxValue;

    return 0;
}
