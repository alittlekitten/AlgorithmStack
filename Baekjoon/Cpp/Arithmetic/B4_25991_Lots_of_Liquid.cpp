#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25991 Lots of Liquid
	// 수학
	cout << fixed;
	cout.precision(6);

	int n;
	double c;
	double tmp = 0;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> c;
		tmp += pow(c, 3);
	}

	cout << cbrt(tmp);

	return 0;
}
