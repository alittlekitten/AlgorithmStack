#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7281 Internetas
	// 수학
	int n, t, m;
	cin >> n;

	int tmp = -1;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> t >> m;

		if (m == 1) {
			if (tmp != -1 && t - tmp > ans) ans = t - tmp;
			tmp = t;
		}
	}

	cout << ans;

	return 0;
}
