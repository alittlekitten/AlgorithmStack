#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34922 사각지대
	// 수학
	double w, h, r;
	cin >> w >> h >> r;

	cout << fixed;
	cout.precision(2);
	cout << w * h - 3.14159 * r * r / 4.0;

	return 0;
}
