#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26592 Triangle Height
	// 수학
	int t;
	double a, b;
	cout << fixed;
	cout.precision(2);

	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> a >> b;
		cout << "The height of the triangle is " << (2 * a) / b << " units\n";
	}

	return 0;
}
