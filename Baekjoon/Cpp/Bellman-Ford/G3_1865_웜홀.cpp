#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1865 웜홀
    // 벨만포드 (음의 싸이클 확인)
    // 음의 싸이클이 있다면 YES, 없다면 NO

    int tc, n, m, w, s, e, t;
    cin >> tc;
    for (int tt = 0; tt < tc; ++tt) {
        bool cycle = false; // cycle 여부
        vector<pair<int, int>> v[501]; // 경로
        int dist[501] = { 0 }; // 최단거리
        cin >> n >> m >> w;
        
        for (int j = 0; j < m; ++j) {
            cin >> s >> e >> t;
            v[s].push_back(make_pair(e, t));
            v[e].push_back(make_pair()
        }
        for (int j = 0; j < w; ++j) {
            cin >> s >> e >> t;
            v[s].push_back(make_pair(e, -t));
        }

        // dist배열 전부 10001로 초기화
        for (int j = 0; j < n; ++j) {
            dist[j] = 10001;
        }

        // 방문
        for (int i = 1; i <= n; ++i) { // n-1 개의 간선을 지나쳤을 때가 최대! (n번 지나치면 음의 사이클 존재!)
            for (int j = 1; j <= n; ++j) { // 출발지 선정 (1부터 n까지 모두 돌리기)
                for (int k = 0; k < v[j].size(); ++k) {
                    if (dist[v[j][k].first] > v[j][k].second + dist[j]) { // 모든 점을 확인해야함, 갱신할 수 있는 점에서 갱신해야함
                        dist[v[j][k].first] = v[j][k].second + dist[j];
                        if (i == n) { // n-1번 만큼 돌렸다면 모든 간선을 확인한 것이므로 더이상 갱신이 되면 안되는데, 갱신이 됐다? 이건 음수 사이클 무한루프다!
                            cycle = true;
                            break;
                        }
                    }
                }
                if (cycle) break;
            }
            if (cycle) break;
        }
        if (cycle) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}
