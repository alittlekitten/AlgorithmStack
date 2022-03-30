#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int arr[100][100];
bool chk[100][100];
int dr[4] = { 0, 1, 0, -1 };
int dc[4] = { 1, 0, -1, 0 };
int m, n;

bool melt(int rr, int cc) {
    int cnt = 0;
    for (int i = 0; i < 4; ++i) {
        int rrr = rr + dr[i];
        int ccc = cc + dc[i];
        if (rrr >= 0 && rrr < n && ccc >= 0 && ccc < m && !arr[rrr][ccc] && chk[rrr][ccc]) cnt++;
    }
    if (cnt >= 2) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2638 치즈
    // bfs

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    int answer = 0;
    while (true) {
        int cnt = 0;
        for (int i = 0; i < 100; ++i) {
            memset(chk[i], 0, sizeof(chk[i]));
        }
        
        q.push(make_pair(0, 0));
        chk[0][0] = true;
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for (int i = 0; i < 4; ++i) {
                int rr = r + dr[i];
                int cc = c + dc[i];
                if (rr < 0 || rr >= n || cc < 0 || cc >= m) continue;
                if (chk[rr][cc]) continue;
                if (arr[rr][cc] == 0) {
                    q.push(make_pair(rr, cc));
                    chk[rr][cc] = true;
                }
                else if (arr[rr][cc] == 1) {
                    arr[rr][cc] = 2;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (arr[i][j] == 2 && melt(i, j)) {
                    cnt++;
                    arr[i][j] = 0;
                }
            }
        }

        // 녹음처리
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (arr[i][j] == 2 && melt(i, j)) arr[i][j] = 0;
            }
        }

        if (!cnt) {
            cout << answer;
            break;
        }
        else answer++;
    }

    return 0;
}
