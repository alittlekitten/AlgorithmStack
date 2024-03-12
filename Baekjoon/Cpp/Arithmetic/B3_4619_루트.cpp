#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4619 루트
	// 수학
	int b, n;
	while (1) {
		cin >> b >> n;

		if (!b && !n) break;
		int a = 1;
		int an = 1;
		int tmp = 1;
		while (1) {
			int tmp2 = 1;
			for (int i = 0; i < n; ++i) tmp2 *= tmp;

			if (abs(tmp2 - b) < abs(b - an)) {
				a = tmp;
				an = tmp2;
			}

			if (tmp2 > b) break;
			else ++tmp;
		}

		cout << a << '\n';
	}

	return 0;
}
