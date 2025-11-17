#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 19572 가뭄(Small)
	// 수학
	double d1, d2, d3;
	cin >> d1 >> d2 >> d3;

	double b = (d1 - d2 + d3) / 2;
	double a = d1 - b;
	double c = d2 - a;

	cout << fixed;
	cout.precision(1);
	if (a > 0 && b > 0 && c > 0) cout << 1 << '\n' << a << ' ' << b << ' ' << c;
	else cout << -1;

	return 0;
}
