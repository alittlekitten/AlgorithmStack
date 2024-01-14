#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26500 Absolutely
	// 수학
	int n;
	double a, b;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a >> b;

		double ans = abs(a - b);

		cout << fixed;
		cout.precision(1);
		cout << ans << '\n';
	}

	return 0;
}
