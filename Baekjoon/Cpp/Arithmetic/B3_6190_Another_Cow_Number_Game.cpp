#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6190 Another Cow Number Game
	// 수학
	long long n;
    cin >> n;

    long long ans = 0;
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
        ++ans;
    }

    cout << ans << '\n';

	return 0;
}
