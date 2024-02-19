#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2721 삼각수의 합
	// 수학
	int t, n;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		int ans = 0;
		for (int j = 1; j <= n; ++j) ans += (j + 1) * (j + 2) / 2 * j;
		cout << ans << '\n';
	}

	return 0;
}
