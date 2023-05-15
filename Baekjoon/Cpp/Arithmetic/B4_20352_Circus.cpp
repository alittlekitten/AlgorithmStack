#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20352 Circus
	// 수학
	double a;
	double pi = 3.14159265359;
	cin >> a;
	cout << fixed;
	cout.precision(10);
	cout << sqrt(a / pi) * 2 * pi;
		
	return 0;
}
