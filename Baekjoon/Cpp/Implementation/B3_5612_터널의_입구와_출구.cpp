#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5612 터널의 입구와 출구
	// 구현
	int n, m, a, b;
	cin >> n >> m;
	int ans = m; // max값
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		m = m + a - b;
		if (m < 0) {
			ans = 0;
			break;
		}
		if (m > ans) ans = m;
	}
	cout << ans;

	return 0;
}
