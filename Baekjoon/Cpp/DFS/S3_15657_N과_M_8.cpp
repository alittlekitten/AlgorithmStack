#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int answer[9];
bool chk[9];

void dfs(int n, int m, int cnt) {
    // 끝 도달
    if (cnt == m) {
        for (int i = 0; i < m; ++i) {
            cout << answer[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (cnt == 0 || (cnt > 0 && v[i] >= answer[cnt - 1])) {
            answer[cnt] = v[i];
            dfs(n, m, cnt + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15657 N과 M(8)
    // 백트래킹 (DFS, subset)

    int n, m, input;
    
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    dfs(n, m, 0);

    return 0;
}
