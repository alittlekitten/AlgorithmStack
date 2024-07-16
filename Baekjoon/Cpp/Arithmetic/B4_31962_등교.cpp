#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31962 등교
	// 수학
	int n, x, s, t;
	cin >> n >> x;
	int ans = -1;
	for (int i = 0; i < n; ++i) {
		cin >> s >> t;
		if (s + t <= x && ans < s) {
			ans = s;
		}
	}
	cout << ans;

	return 0;
}
