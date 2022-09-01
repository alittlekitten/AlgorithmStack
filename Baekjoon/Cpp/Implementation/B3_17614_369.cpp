#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 17614 369
    // 구현
    int n;
    int cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int tmp = i;
        while (tmp) {
            if (tmp % 10 == 3 || tmp % 10 == 6 || tmp % 10 == 9) ++cnt;
            tmp /= 10;
        }
    }

    cout << cnt;

	return 0;
}
