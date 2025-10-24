#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30617 Knob
	// 구현
	int t, l, r, ll, rr;
	int ans = 0;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> l >> r;
		if (i > 0) {
			if (ll == l && ll != 0) ++ans;
			if (rr == r && rr != 0) ++ans;
		}
		if (l == r && l != 0) ++ans;
		ll = l; 
		rr = r;
	}
	cout << ans;

	return 0;
}
