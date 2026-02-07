#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9317 Monitor DPI
	// 수학
	double d, rh, rv;
	while (1) {
		cin >> d >> rh >> rv;
		if (!d && !rh && !rv) break;
		double w = 16 * d / sqrt(337);
		double h = 9 * w / 16;

		cout << fixed;
		cout.precision(2);
		cout << "Horizontal DPI: " << rh / w << '\n';
		cout << "Vertical DPI: " << rv / h << '\n';
	}

	return 0;
}
