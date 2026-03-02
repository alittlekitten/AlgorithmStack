#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13063 Lobby
	// 수학
	int n, m, k;
	while (1) {
		cin >> n >> m >> k;
		if (n == 0 && m == 0 && k == 0) break;

		if (n / 2 + 1 - m <= 0) cout << 0 << '\n';
		else if (n / 2 + 1 - m <= n - m - k) cout << n / 2 + 1 - m << '\n';
		else cout << -1 << '\n';
	}

	return 0;
}
