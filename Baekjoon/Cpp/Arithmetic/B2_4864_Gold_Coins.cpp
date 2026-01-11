#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4864 Gold Coins
	// 수학
	int d, r;

	while (true) {
		cin >> d;
		if (d == 0) break;

		int r = d;
		int tmp = 1;
		int sum = 0;
		while (r > 0) {
			if (r >= tmp) {
				sum += tmp * tmp;
				r -= tmp;
			}
			else {
				sum += r * tmp;
				break;
			}
			++tmp;
		}

		cout << d << " " << sum << '\n';
	}

	return 0;
}
