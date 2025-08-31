#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5666 Hot Dogs
	// 수학
	double h, p;
	cout << fixed;
	cout.precision(2);

	while (cin >> h >> p) {
		double ans = h / p;
		cout << ans << '\n';
	}

	return 0;
}
