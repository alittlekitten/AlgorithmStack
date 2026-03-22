#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 35247 Itsy Bits
	// 수학
	long long n;
	cin >> n;

	long long tmp = 1;
	int cnt = 0;

	while (tmp <= n) {
		tmp *= 2;
		++cnt;
	}

	int ans = 1;
	while (ans < cnt) ans *= 2;

	if (ans == 1) cout << "1 bit";
	else cout << ans << " bits";

	return 0;
}
