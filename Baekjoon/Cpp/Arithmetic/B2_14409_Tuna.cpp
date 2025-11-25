#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14409 Tuna
	// 수학
	int n, x, p1, p2, p3;
	cin >> n >> x;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> p1 >> p2;
		if (abs(p1 - p2) <= x) ans += max(p1, p2);
		else {
			cin >> p3;
			ans += p3;
		}
	}

	cout << ans;

	return 0;
}
