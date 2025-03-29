#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27940 가지 산사태
	// 그리디
	int n, m, k, t, r;
	cin >> n >> m >> k;

	int sum = 0;
	for (int i = 1; i <= m; ++i) {
		cin >> t >> r;
		sum += r;

		if (sum > k) {
			cout << i << " " << 1;
			return 0;
		}
	}
	cout << -1;

	return 0;
}
