#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8725 Szachy
	// 구현
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 0, x; i < n; ++i) {
		int tmp = -1000001;
		for (int j = 0; j < n; ++j) {
			cin >> x;
			if (tmp < x) tmp = x;
		}
		if (tmp > 0) ans += tmp;
	}
	cout << ans;

	return 0;
}
