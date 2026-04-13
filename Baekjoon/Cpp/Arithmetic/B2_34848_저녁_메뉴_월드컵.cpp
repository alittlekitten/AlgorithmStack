#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34848 저녁 메뉴 월드컵
	// 수학
	int t, n;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> n;

		int cnt = 0;
		while (n > 1) {
			if (n % 2 == 1) ++cnt;
			n = (n + 1) / 2;
		}

		cout << cnt << '\n';
	}

	return 0;
}
