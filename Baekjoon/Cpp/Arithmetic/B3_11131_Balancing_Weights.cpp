#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11131 Balancing Weights
	// 수학
	int t, n, w;
	cin >> t;

	while (t--) {
		cin >> n;
		int arr[101] = { 0 };

		for (int i = 0; i < n; ++i) cin >> arr[i];

		int ans = 0;
		for (int i = 0; i < n; ++i) ans += 100 * arr[i];

		if (ans == 0) cout << "Equilibrium\n";
		else if (ans > 0) cout << "Right\n";
		else cout << "Left\n";
	}

	return 0;
}
