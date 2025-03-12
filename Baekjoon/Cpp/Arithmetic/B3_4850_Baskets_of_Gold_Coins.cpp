#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4850 Baskets of Gold Coins
	// 수학
	while (1) {
		int n, w, d, ww;
		cin >> n >> w >> d >> ww;
		if (cin.eof()) break;

		int target = (w * ((n - 1) * n) / 2 - ww) / d;

		if (!target) cout << n << '\n';
		else cout << target << '\n';
	}

	return 0;
}
