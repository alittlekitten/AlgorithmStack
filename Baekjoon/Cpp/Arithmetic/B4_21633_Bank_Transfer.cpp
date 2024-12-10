#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21633 Bank Transfer
	// 수학
	double k;
	cin >> k;

	cout.precision(2);
	cout << fixed;

	if (25 + k / 100 >= 2000.0) cout << "2000.00";
	else if (25 + k / 100 <= 100.0) cout << "100.00";
	else cout << 25 + k / 100;

	return 0;
}
