#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14682 Shifty Sum
	// 수학
	int n, k;
	cin >> n >> k;

	int ans = n;
	for (int i = 0; i < k; ++i) {
		n *= 10;
		ans += n;
	}

	cout << ans;

	return 0;
}
