#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11134 쿠키애호가
    // 수학
    int t, n, c;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> c;
        if (n % c == 0) cout << n / c << '\n';
        else cout << n / c + 1 << '\n';
    }

    return 0;
}
