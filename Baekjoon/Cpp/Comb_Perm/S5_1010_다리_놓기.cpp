#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1010 다리 놓기
	// 조합론
	int t, n, m;
	cin >> t;

	while (t--) {
		int ans = 1;
		int tmp = 1;
		cin >> n >> m;
		for (int i = m; i > m - n; --i, ++tmp) {
			ans *= i;
			ans /= tmp;
		}
		cout << ans << '\n';
	}

	return 0;
}