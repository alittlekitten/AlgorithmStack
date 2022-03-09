#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int a[601][601];
bool chk[601][601];
int ans = 0;
int n, m;
int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };

bool chkIndex(int r, int c) {
    if (r < 0 || r >= n || c < 0 || c >= m) return false;
    return true;
}

void bfs(int ir, int ic) {
    queue<pair<int, int>> q;
    q.push(make_pair(ir, ic));
    chk[ir][ic] = true;
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        if (a[r][c] == 'P') ans++;
        for (int i = 0; i < 4; ++i) {
            int rr = r + dr[i];
            int cc = c + dc[i];
            if (chkIndex(rr, cc) && !chk[rr][cc]) {
                if (a[rr][cc] != 'X') {
                    q.push(make_pair(rr, cc));
                    chk[rr][cc] = true;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 21735 헌내기는 친구가 필요해
    // bfs
    string input;
    int ir = -1;
    int ic = -1;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        for (int j = 0; j < m; ++j) {
            a[i][j] = input[j];
            if (input[j] == 'I') {
                ir = i;
                ic = j;
            }
        }
    }

    bfs(ir, ic);
    if (ans == 0) cout << "TT";
    else cout << ans;

    return 0;
}
