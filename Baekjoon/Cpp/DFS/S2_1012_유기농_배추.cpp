#include <iostream>
#include <stack>
using namespace std;

int farm[50][50] = { 0 };
int chk[50][50] = { 0 };
stack<pair<int, int>> s;

// 세로가 n 가로가 m
void dfs(int a, int b, int n, int m) {
    s.push(make_pair(a, b));
    pair<int, int> tmp;
    chk[a][b] = 1;
    while (!s.empty()) {
        tmp = s.top();
        s.pop();
        // 오른쪽
        if (tmp.second != m - 1 && farm[tmp.first][tmp.second + 1] == 1 && chk[tmp.first][tmp.second + 1] == 0) {
            chk[tmp.first][tmp.second + 1] = 1;
            s.push(make_pair(tmp.first, tmp.second + 1));
        }
        // 왼쪽
        if (tmp.second != 0 && farm[tmp.first][tmp.second - 1] == 1 && chk[tmp.first][tmp.second - 1] == 0) {
            chk[tmp.first][tmp.second - 1] = 1;
            s.push(make_pair(tmp.first, tmp.second - 1));
        }
        // 아래
        if (tmp.first != n - 1 && farm[tmp.first + 1][tmp.second] == 1 && chk[tmp.first + 1][tmp.second] == 0) {
            chk[tmp.first + 1][tmp.second] = 1;
            s.push(make_pair(tmp.first + 1, tmp.second));
        }
        // 위
        if (tmp.first != 0 && farm[tmp.first - 1][tmp.second] == 1 && chk[tmp.first - 1][tmp.second] == 0) {
            chk[tmp.first - 1][tmp.second] = 1;
            s.push(make_pair(tmp.first - 1, tmp.second));
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // DFS
    
    int t, m, n, k, in1, in2;
    int answer = 0;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> m >> n >> k;
        for (int j = 0; j < k; ++j) {
            cin >> in1 >> in2;
            farm[in2][in1] = 1;
        }

        for (int a = 0; a < n; ++a) {
            for (int b = 0; b < m; ++b) {
                if (farm[a][b] == 1 && chk[a][b] == 0) {
                    dfs(a, b, n, m);
                    answer++;
                }
            }
        }
        cout << answer << '\n';

        // 초기화
        answer = 0;
        fill(farm[0], farm[50], 0);
        fill(chk[0], chk[50], 0);
    }

    

    return 0;
}
