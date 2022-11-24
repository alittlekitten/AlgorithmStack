#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4539 반올림
	// 수학
	int n, x;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (x >= 10) x = (x + 5) / 10 * 10;
		if (x >= 100) x = (x + 50) / 100 * 100;
		if (x >= 1000) x = (x + 500) / 1000 * 1000;
		if (x >= 10000) x = (x + 5000) / 10000 * 10000;
		if (x >= 100000) x = (x + 50000) / 100000 * 100000;
		if (x >= 1000000) x = (x + 500000) / 1000000 * 1000000;
		if (x >= 10000000) x = (x + 5000000) / 10000000 * 10000000;
		if (x >= 100000000) x = (x + 50000000) / 100000000 * 100000000;

		cout << x << '\n';
	}

	return 0;
}
