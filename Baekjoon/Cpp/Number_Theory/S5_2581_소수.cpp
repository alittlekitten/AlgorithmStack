#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	  // 2581 소수
    // 정수론(에라토스테네스의 체)
    int m, n;
    cin >> m >> n;
    int sum = 0;
    int min = -1;

    for (int i = m; i <= n; ++i) {
        if (i == 1) continue;
        bool chk = false;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                chk = true;
                break;
            }
        }
        if (!chk) {
            sum += i;
            if (min == -1) min = i;
        }
    }

    if (!sum) cout << min;
    else cout << sum << '\n' << min;

    return 0;
}
