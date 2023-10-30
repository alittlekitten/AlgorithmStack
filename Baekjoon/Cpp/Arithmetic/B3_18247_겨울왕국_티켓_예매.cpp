#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18247 겨울왕국 티켓 예매
	// 수학
	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n < 12 || m < 4) cout << -1 << '\n';
		else cout << 11 * m + 4 << '\n';
	}

	return 0;
}
