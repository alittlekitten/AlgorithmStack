#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27159 노 땡스
	// 수학
	int n, x;
	int ans = 0;
	int before = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (i == 0) ans += x;
		else {
			if (before != x - 1) ans += x;
		}
		before = x;
	}
	cout << ans;

	return 0;
}
