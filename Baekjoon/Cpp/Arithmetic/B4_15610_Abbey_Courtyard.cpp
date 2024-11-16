#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15610 Abbey Courtyard
	// 수학
	double n;
	cin >> n;
	cout.precision(20);
	cout << 4 * sqrt(n);

	return 0;
}
