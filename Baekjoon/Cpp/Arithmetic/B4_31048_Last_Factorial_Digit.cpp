#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31048 Last Factorial Digit
	// 수학
	int t, n;
	cin >> t;

	while(t--) {
		cin >> n;
		int ans = 1;
		for (int i = 1; i <= n; ++i) ans = (ans * i) % 10;
		cout << ans << "\n";
	}

	return 0;
}
