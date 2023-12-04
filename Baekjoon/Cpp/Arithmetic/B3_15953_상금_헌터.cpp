#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15953 상금 헌터
	// 수학
	int t, a, b;
	cin >> t;
	while (t--) {
		int ans = 0;
		cin >> a >> b;

		if (a == 0) ans += 0;
		else if (a <= 1) ans += 500;
		else if (a <= 3) ans += 300;
		else if (a <= 6) ans += 200;
		else if (a <= 10) ans += 50;
		else if (a <= 15) ans += 30;
		else if (a <= 21) ans += 10;

		if (!b) ans += 0;
		else if (b <= 1) ans += 512;
		else if (b <= 3) ans += 256;
		else if (b <= 7) ans += 128;
		else if (b <= 15) ans += 64;
		else if (b <= 31) ans += 32;
		cout << ans * 10000 << '\n';
	}

	return 0;
}
