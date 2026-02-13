#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11176 In the Shower
	// 구현
	int t, e, n, x;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> e >> n;
		int ans = 0;
		while (n--) {
			cin >> x;
			if (x > e) ++ans;
		}

		cout << ans << '\n';
	}

	return 0;
}
