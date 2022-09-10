#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2720 세탁소 사장 동혁
    // 수학
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int change;
        cin >> change;
        int q = change / 25;
        change %= 25;
        int d = change / 10;
        change %= 10;
        int n = change / 5;
        change %= 5;
        int p = change;
        cout << q << " " << d << " " << n << " " << p << '\n';
    }

	return 0;
}
