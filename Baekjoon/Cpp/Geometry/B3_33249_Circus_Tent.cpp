#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33249 Circus Tent
	// 기하학
	double d, h;
	double pi = 3.14159258;
	cin >> d >> h;

	double r = (d + 10.0) / 2.0;
	cout.precision(10);
	cout << fixed;
	cout << 2 * pi * r * h + pi * r * r;

	return 0;
}
