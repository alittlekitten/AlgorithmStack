#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 22279 Quality-Adjusted Life-Year
	// 수학
	int n;
	double q, y;
	cin >> n;

	double ans = 0.0;
	for (int i = 0; i < n; ++i) {
		cin >> q >> y;
		ans += q * y;
	}

	cout << fixed;
	cout.precision(3);
	cout << ans;

	return 0;
}
