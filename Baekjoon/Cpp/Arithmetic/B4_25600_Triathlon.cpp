#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25600 Triathlon
	// 수학
	int n, a, d, g;
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> d >> g;
		int tmp = a * (d + g);

		if (a == d + g) tmp <<= 1;
		ans = max(tmp, ans);
	}

	cout << ans;

	return 0;
}
v
