#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m;
bool arr[1001][1001];
bool v[1001][1001][11];
int dr[4] = { 1, 0, -1, 0 };
int dc[4] = { 0, -1, 0, 1 };

int bfs(int r, int c, int k) {
    queue<tuple<int, int, int, int>> q; // 순서대로 r좌표, c좌표, 뚫을 수 있는 벽의 수, 거리
    q.push(make_tuple(r, c, k, 1));
    v[r][c][k] = true;
    while (!q.empty()) {

        int rr = get<0>(q.front());
        int cc = get<1>(q.front());
        int kk = get<2>(q.front());
        int ww = get<3>(q.front());
        q.pop();

        if (rr == n - 1 && cc == m - 1) {
            return ww;
        }

        for (int i = 0; i < 4; ++i) {
            int rrr = rr + dr[i];
            int ccc = cc + dc[i];
            
            if (rrr < 0 || rrr >= n || ccc < 0 || ccc >= m) continue;
            // 벽을 뚫어야 되는 곳을 가는 경우
            if (arr[rrr][ccc] && kk > 0 && !v[rrr][ccc][kk-1]) {
                q.push(make_tuple(rrr, ccc, kk-1, ww + 1));
                v[rrr][ccc][kk-1] = true;
            }
            // 벽을 안뚫어도 되는 곳을 가는 경우
            if (!arr[rrr][ccc] && !v[rrr][ccc][kk]) {
                q.push(make_tuple(rrr, ccc, kk, ww + 1));
                v[rrr][ccc][kk] = true;
            }
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 14442 벽 부수고 이동하기 2
    // bfs, 3단 visited 배열
    string input;
    int k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        for (int j = 0; j < m; ++j) {
            arr[i][j] = input[j] - '0';
        }
    }

    cout << bfs(0, 0, k);

    return 0;
}
