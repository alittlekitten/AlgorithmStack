#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26575 Pups
	// 수학
	double n, d, f, p;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> d >> f >> p;
		cout << fixed;
		cout.precision(2);
		cout << "$" << d * f * p << '\n';
	}

	return 0;
}
