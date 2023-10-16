#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10180 Ship Selection
	// 수학
	int t, n, d;
	double v, f, c;
	cin >> t;
	while (t--) {
		cin >> n >> d;
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			cin >> v >> f >> c;
			double tmp = v * f / c;
			if (tmp >= d) ++ans;
		}
		cout << ans << '\n';
	}

	return 0;
}
