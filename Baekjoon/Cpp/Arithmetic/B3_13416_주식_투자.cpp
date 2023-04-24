#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 13416 주식 투자
	// 수학
	int t, n, a, b, c;
	cin >> t;
	while (t--) {
		cin >> n;
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a >> b >> c;
			int tmp = max(a, max(b, c));
			if (tmp > 0) ans += tmp;
		}
		cout << ans << '\n';
	}

	return 0;
}
