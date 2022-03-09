#include <iostream>
#include <algorithm>

using namespace std;

int a[101] = { 0 };
int maxValue = 0;
int m, n;

void dfs(int cnt, int idx, int value) {
    if (idx > n) return;
    if (cnt == m || idx == n) {
        if (maxValue < value) maxValue = value;
    }
    else {
        if (idx + 1 <= n) dfs(cnt + 1, idx + 1, a[idx + 1] + value);
        if (idx + 2 <= n) dfs(cnt + 1, idx + 2, a[idx + 2] + value / 2);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 21735 눈덩이 굴리기
    // dfs
    
    int input;
    cin >> n >> m;

    a[0] = 1;
    
    for (int i = 1; i <= n; ++i) {
        cin >> input;
        a[i] = input;
    }

    dfs(0, 0, 1);
    cout << maxValue;

    return 0;
}
