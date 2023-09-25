#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24751 Betting
	// 수학
	double a;
	cin >> a;
	cout << fixed;
	cout.precision(3);
	cout << 100 / a << '\n' << 100 / (100 - a);

	return 0;
}
