#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7279 Autobusas
	// 구현
	int n, k, a, b;
	cin >> n >> k;

	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		sum -= b;
		if (sum < 0) sum = 0;
		sum += a;

		ans = max(ans, sum - k);
	}

	cout << ans;

	return 0;
}
