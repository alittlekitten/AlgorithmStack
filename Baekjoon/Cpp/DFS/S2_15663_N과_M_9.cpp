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
    int lastAnswer = 0; // 같은 위치에서 다시 같은 값이 등장하면 안됨!!
    for (int i = 0; i < n; ++i) {
        if (!chk[i] && v[i] != lastAnswer) {
            answer[cnt] = v[i];
            lastAnswer = answer[cnt];
            chk[i] = true;
            dfs(n, m, cnt + 1);
            chk[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15657 N과 M(9)
    // 백트래킹 (DFS)

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
