#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8558 Silnia
	// 수학
	int n;
	int ans = 1;
	cin >> n;
	for (int i = 2; i <= n; ++i) {
		ans *= i;
		ans %= 10;
	}
	cout << ans;

	return 0;
}
