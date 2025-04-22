#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13496 The Merchant of Venice
	// 수학
	int k, n, s, d, v, dd;
	cin >> k;

	int ans = 0;
	for (int i = 1; i <= k; ++i) {
		cin >> n >> s >> d;
		ans = 0;
		for (int j = 0; j < n; ++j) {
			cin >> v >> dd;
			if (s * d >= v) ans += dd;
		}
		cout << "Data Set " << i << ":\n" << ans << '\n' << '\n';
	}

	return 0;
}
