#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28490 Area
	// 수학
	int n, h, w;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> h >> w;
		if (ans < h * w) ans = h * w;
	}
	cout << ans;

	return 0;
}
