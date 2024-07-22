#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26530 Shipping
	// 수학
	int t, n;
	double a, b;
	string s;

	cout << fixed;
	cout.precision(2);

	cin >> t;
	while (t--) {
		double ans = 0;
		cin >> n;

		for (int i = 0; i < n; ++i) {
			cin >> s >> a >> b;
			ans += a * b;
		}

		cout << '$' << ans << '\n';
	}

	return 0;
}
