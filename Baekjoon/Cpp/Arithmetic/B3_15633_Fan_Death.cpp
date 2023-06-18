#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15633 Fan Death
	// 수학
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) ans += i;
	}
	cout << ans * 5 - 24 << '\n';

	return 0;
}
