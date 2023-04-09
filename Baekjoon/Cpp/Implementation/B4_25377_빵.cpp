#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25377 빵
	// 구현
	int n, a, b;
	int ans = 1001;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (a <= b) ans = min(ans, b);
	}
	if (ans == 1001) cout << -1;
	else cout << ans;

	return 0;
}
