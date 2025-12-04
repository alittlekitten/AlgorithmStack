#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9848 Gift
	// 구현
	int n, k, t, prevRecord;
	cin >> n >> k;

	int ans = 0;
	int tmp = 0;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		if (tmp - t >= k) ++ans;
		tmp = t;
	}
	cout << ans;

	return 0;
}
