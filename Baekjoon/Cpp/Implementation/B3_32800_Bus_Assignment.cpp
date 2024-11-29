#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32800 Bus Assignment
	// 구현, 수학
	int n, a, b;
	cin >> n;
	int now = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		now -= a;
		now += b;
		if (now > ans) ans = now;
	}
	cout << ans;

	return 0;
}
