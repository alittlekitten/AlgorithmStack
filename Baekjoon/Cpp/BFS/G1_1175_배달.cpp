#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m;
int tgr1, tgc1, tgr2, tgc2; // 타겟 좌표
char arr[50][50];
bool v[50][50][4][3]; // 방향마다 체크
int dr[4] = { 1, 0, -1, 0 };
int dc[4] = { 0, -1, 0, 1 };

int bfs(int r, int c) {
    queue<tuple<int, int, int, int, bool, bool, bool>> q; // 순서대로 r좌표, c좌표, 거리, 직전 움직인 방향, 1번교실 방문 여부, 2번 교실 방문 여부, 임의 교실 방문 여부
    q.push(make_tuple(r, c, 0, 5, false, false, false)); // 처음에는 어느방향으로도 움직일 수 있으므로 5를 넣어준다
    while (!q.empty()) {

        int rr = get<0>(q.front());
        int cc = get<1>(q.front());
        int ww = get<2>(q.front());
        int pp = get<3>(q.front());
        bool mm1 = get<4>(q.front());
        bool mm2 = get<5>(q.front());
        bool mm3 = get<6>(q.front());
        q.pop();

        if (mm1 && mm2) {
            return ww;
        }

        for (int i = 0; i < 4; ++i) {
            int rrr = rr + dr[i];
            int ccc = cc + dc[i];
            
            if (rrr < 0 || rrr >= n || ccc < 0 || ccc >= m) continue; // 교실 넘어가면 패스
            if (pp == i) continue; // 이전 움직임과 같은 방향이면 패스
            
            // 해당 방향으로 진입한 적이 있으면 continue
            if (mm1 && !mm2 && v[rrr][ccc][i][1]) continue;
            else if (!mm1 && mm2 && v[rrr][ccc][i][2]) continue;
            else if (!mm1 && !mm2 && v[rrr][ccc][i][0]) continue;

            if (arr[rrr][ccc] == 'C') {
                if (rrr == tgr1 && ccc == tgc1) {
                    q.push(make_tuple(rrr, ccc, ww + 1, i, true, mm2, true));
                    v[rrr][ccc][i][1] = true;
                }
                else {
                    q.push(make_tuple(rrr, ccc, ww + 1, i, mm1, true, true));
                    v[rrr][ccc][i][2] = true;
                }
            }

            if (arr[rrr][ccc] == '.' || arr[rrr][ccc] == 'S') {
                q.push(make_tuple(rrr, ccc, ww + 1, i, mm1, mm2, mm3));
                if (mm1 && !mm2) v[rrr][ccc][i][1] = true;
                else if (!mm1 && mm2) v[rrr][ccc][i][2] = true;
                else v[rrr][ccc][i][0] = true;
            }
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1175 배달
    // bfs
    string input;
    int sr = -1;
    int sc = -1;
    bool chk = false;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        for (int j = 0; j < m; ++j) {
            arr[i][j] = input[j];
            if (arr[i][j] == 'S') {
                sr = i;
                sc = j;
            }
            else if (arr[i][j] == 'C') {
                if (!chk) {
                    tgr1 = i;
                    tgc1 = j;
                    chk = true;
                }
                else {
                    tgr2 = i;
                    tgc2 = j;
                }
            }
        }
    }

    cout << bfs(sr, sc);

    return 0;
}
