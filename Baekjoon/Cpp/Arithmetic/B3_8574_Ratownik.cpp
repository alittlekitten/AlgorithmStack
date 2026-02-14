#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8574 Ratownik
	// 수학
	int n, k, x, y, x2, y2;
	cin >> n >> k >> x >> y;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x2 >> y2;
		if (sqrt(pow(x2 - x, 2) + pow(y2 - y, 2)) > k) ++ans;
	}
	cout << ans;

	return 0;
}
