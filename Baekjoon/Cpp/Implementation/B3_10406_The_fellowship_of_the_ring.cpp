#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10406 The fellowship of the ring
	// 구현
	int w, n, p, h;
	cin >> w >> n >> p;

	int ans = 0;
	for (int i = 0; i < p; ++i) {
		cin >> h;
		if (h >= w && h <= n) ++ans;
	}

	cout << ans;

	return 0;
}
