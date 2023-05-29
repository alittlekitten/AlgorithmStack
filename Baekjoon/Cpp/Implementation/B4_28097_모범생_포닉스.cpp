#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28097 모범생 포닉스
	// 구현
	int n, t;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		ans += t;
		if (i != n - 1) ans += 8;
	}
	cout << ans / 24 << " " << ans % 24;

	return 0;
}
