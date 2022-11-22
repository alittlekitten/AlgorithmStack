#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 7489 팩토리얼
    // 수학
    int t, n;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        int ans = 1;

        for (int j = 1; j <= n; j++) {
            ans *= j;
            ans %= 100000;
            while (ans % 10 == 0)
            ans /= 10;
        }
        cout << ans % 10 << '\n';
    }

    return 0;
}
