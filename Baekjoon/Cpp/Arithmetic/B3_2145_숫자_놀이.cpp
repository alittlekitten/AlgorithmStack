#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2145 숫자 놀이
	// 수학
	int n, tmp1, tmp2;
	while (1) {
		cin >> n;
		if (n == 0) break;

		while (n >= 10) {
			tmp1 = n, tmp2 = 0;
			while (tmp1 > 0) {
				tmp2 += tmp1 % 10;
				tmp1 /= 10;
			}
			n = tmp2;
		}
		cout << n << '\n';
	}

	return 0;
}
