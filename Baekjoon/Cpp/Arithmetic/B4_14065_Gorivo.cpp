#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14065 Gorivo
	// 수학
	double x;
	cin >> x;
	cout << fixed;
	cout.precision(6);
	cout << 100.0 / ((1.609344 / 3.785411784) * x);

	return 0;
}
