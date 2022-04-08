#include <iostream>
#include <algorithm>
using namespace std;

int x[100001];
int y[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2819 상근이의 로봇
    // 이분탐색
    int n, m;
    int ans = 0;
    string command;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
        ans += abs(x[i]) + abs(y[i]);
    }
    cin >> command;

    // 정렬
    sort(x, x + n);
    sort(y, y + n);

    // 로봇 위치
    int nowX = 0;
    int nowY = 0;

    for (int i = 0; i < m; ++i) {
        if (command[i] == 'S') ans += n - 2 * (lower_bound(y, y + n, ++nowY) - y);
        else if (command[i ] == 'J') ans += n - 2 *(lower_bound(y, y + n, --nowY) - y);
        else if (command[i] == 'I') ans += n - 2 * (lower_bound(x, x + n, --nowX) - x);
        else if (command[i] == 'Z') ans += n - 2 * (lower_bound(x, x + n, --nowX) - x);
        cout << ans << '\n';
    }

    return 0;
}
