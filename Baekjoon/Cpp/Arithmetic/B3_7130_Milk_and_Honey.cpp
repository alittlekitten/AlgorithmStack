#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7130 Milk and Honey
	// 수학
	int m, h, n, c, b;
	cin >> m >> h >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> c >> b;
		ans += max(c * m, b * h);
	}

	cout << ans;

	return 0;
}
