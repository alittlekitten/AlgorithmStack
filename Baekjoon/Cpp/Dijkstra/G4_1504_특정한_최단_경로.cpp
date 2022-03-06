#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v[801];
int dist[801];

void dijkstra(int start) {
    for (int i = 0; i < 801; ++i) {
        dist[i] = 800000; // 800개의 정점을 1000의 weight로 가진 간선들로 일렬로 연결하는 최악의 경우를 생각하면 INF값은 799*1000를 초과해야 하므로 800000 대입
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, start));
    dist[start] = 0;

    while (!pq.empty()) {
        int w = pq.top().first;
        int curr = pq.top().second;
        pq.pop();

        for (int i = 0; i < v[curr].size(); ++i) {
            int nextw = w + v[curr][i].first;
            int nextv = v[curr][i].second;
            if (nextw < dist[nextv]) {
                dist[nextv] = nextw;
                pq.push(make_pair(nextw, nextv));
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1504 특정한 최단 경로
    // 다익스트라

    int n, e;
    int a, b, c;
    cin >> n >> e;
    for (int i = 0; i < e; ++i) {
        cin >> a >> b >> c;
        // 양방향
        v[a].push_back(make_pair(c, b));
        v[b].push_back(make_pair(c, a));
    }

    int f, s;
    cin >> f >> s;

    // 이동 경로 최적화 값 계산
    dijkstra(1);
    // 예외처리
    if (dist[f] == 800000 || dist[s] == 800000 || dist[n] == 800000) {
        cout << -1;
        return 0;
    }
    int otof = dist[f];
    int otos = dist[s];
    dijkstra(f);
    int ftos = dist[s];
    int fton = dist[n];
    dijkstra(s);
    int stof = dist[f];
    int ston = dist[n];

    // `시작 - f - s - 도착`과 `시작 - s - f - 도착` 중에 더 작은 경로 출력
    int answer = min(otof + ftos + ston, otos + stof + fton);
    cout << answer;

    return 0;
}
