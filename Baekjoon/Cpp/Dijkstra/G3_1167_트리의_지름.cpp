#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<long, int>> v[100001];
long dist[100001];

void dijkstra(int start) {
    for (int i = 1; i < 100001; ++i) {
        if(i != start) dist[i] = 10000000001;
    }

    priority_queue<pair<long, int>, vector<pair<long, int>>, greater<pair<long, int>>> pq; // 오름차순 pq 등록 (pair 앞은 weight, 뒤는 vertex - 도착점)
    pq.push(make_pair(0, start)); // 시작점 등록

    while (!pq.empty()) {
        long w = pq.top().first; // 가장 우선순위가 높은 점의 dist를 추출해서 w에 저장
        int curr = pq.top().second; // 가장 우선순위가 높은 vertex를 curr에 등록
        pq.pop(); // 값을 추출했으니 pq에서 제거

        if (dist[curr] < w) continue; // w가 기존 비용보다 크면 통과
        for (int i = 0; i < v[curr].size(); ++i) { // curr에서 시작하는 간선을 모두 탐색
            long nextw = w + v[curr][i].first; // 그 간선으로 연결된 도착 vertex까지의 거리 (다익스트라 시작점 ~ start까지는 반드시 최단거리)
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

    // 1167 트리의 지름
    // 다익스트라 * 2
    // 1967이랑 사실상 동일한 문제!!
    // 루트에서 제일 먼 곳을 다익스트라로 찾고, 제일 먼 곳에서 또 제일 먼 곳을 다익스트라로 찾아서 그 거리를 구하면 된다!
    int n, a, b;
    long c;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a;
        while (true) {
            cin >> b;
            if (b == -1) break;
            cin >> c;
            v[a].push_back(make_pair(c, b));
            v[b].push_back(make_pair(c, a));
        }
        v[a].push_back(make_pair(c, b));
        v[b].push_back(make_pair(c, a));
    }

    dijkstra(1);
    
    long maxValue = -1;
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

    cout << maxValue;

    return 0;
}
