#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m;
bool arr[1001][1001];
bool v[1001][1001][2]; // 벽을 뚫은 경우와 안뚫은 경우로 나누어서 생각
int dr[4] = { 1, 0, -1, 0 };
int dc[4] = { 0, -1, 0, 1 };

int bfs(int r, int c) {
    queue<tuple<int, int, bool, int>> q;
    q.push(make_tuple(r, c, false, 1));
    v[r][c][0] = true;
    while (!q.empty()) {

        int rr = get<0>(q.front());
        int cc = get<1>(q.front());
        bool bb = get<2>(q.front());
        int ww = get<3>(q.front());
        q.pop();

        if (rr == n - 1 && cc == m - 1) {
            return ww;
        }

        for (int i = 0; i < 4; ++i) {
            int rrr = rr + dr[i];
            int ccc = cc + dc[i];
            
            if (rrr < 0 || rrr >= n || ccc < 0 || ccc >= m) continue;
            // 벽을 아직 안뚫었고, 뚫어야 되는 곳을 가는 경우
            if (arr[rrr][ccc] && !bb && !v[rrr][ccc][1]) {
                q.push(make_tuple(rrr, ccc, !bb, ww + 1));
                v[rrr][ccc][1] = true;
            }
            // 벽을 아직 안뚫었고, 안뚫어도 되는 곳을 가는 경우
            if (!arr[rrr][ccc] && !bb && !v[rrr][ccc][0]) {
                q.push(make_tuple(rrr, ccc, bb, ww + 1));
                v[rrr][ccc][0] = true;
            }
            // 벽을 이미 뚫었고, 안뚫어도 되는 곳을 가는 경우
            if (!arr[rrr][ccc] && bb && !v[rrr][ccc][1]) {
                q.push(make_tuple(rrr, ccc, bb, ww + 1));
                v[rrr][ccc][1] = true;
            }
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2206 벽 부수고 이동하기
    // bfs
    string input;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        for (int j = 0; j < m; ++j) {
            arr[i][j] = input[j] - '0';
        }
    }

    cout << bfs(0,0);
    
    return 0;
}
