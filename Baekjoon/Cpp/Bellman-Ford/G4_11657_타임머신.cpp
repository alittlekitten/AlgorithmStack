#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 11657 타임머신
    // 벨만포드

    int n, m, s, e, t;

    bool cycle = false; // cycle 여부
    vector<pair<int, int>> v[501]; // 경로
    long long dist[501] = { 0 }; // 최단거리
    cin >> n >> m;
        
    for (int i = 0; i < m; ++i) {
        cin >> s >> e >> t;
        v[s].push_back(make_pair(e, t));
    }

    // dist배열 전부 1000000001로 초기화
    for (int i = 1; i <= n; ++i) {
        dist[i] = 1000000001;
    }

    dist[1] = 0; // 1번에서 출발

    // 방문
    for (int i = 1; i <= n; ++i) { // n-1
        for (int j = 1; j <= n; ++j) {
            for (int k = 0; k < v[j].size(); ++k) {
                if (dist[j] != 1000000001 && dist[v[j][k].first] > v[j][k].second + dist[j]) { // 기존 직통 연결보다 j 거쳐가는게 cost가 작으면 바꿔주기!!
                    dist[v[j][k].first] = v[j][k].second + dist[j];
                    if (i == n) {
                        cycle = true;
                        break;
                    }
                }
            }
            if (cycle) break;
        }
        if (cycle) break;
    }
    if (cycle) cout << -1 << '\n';
    else {
        for (int i = 2; i <= n; ++i) {
            if (dist[i] != 1000000001) cout << dist[i] << '\n';
            else cout << -1 << '\n';
        }
    }
   
    return 0;
}
