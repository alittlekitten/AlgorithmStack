#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18691 Pokemon Buddy
	// 수학
	int t, g, c, e;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		int ans = 0;
		cin >> g >> c >> e;
		if (c >= e) ans = 0;
		else {
			if (g == 1) ans = e - c;
			else if (g == 2) ans = (e - c) * 3;
			else ans = (e - c) * 5;
		}
		cout << ans << '\n';
	}

	return 0;
}
