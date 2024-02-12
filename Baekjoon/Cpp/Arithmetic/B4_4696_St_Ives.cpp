#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4696 St. Ives
	// 수학
	double input;
	cout << fixed;
	cout.precision(2);
	while (1) {
		cin >> input;
		if (input == 0) break;
		cout << input + 1 + pow(input, 2) + pow(input, 3) + pow(input, 4) << '\n';
	}

	return 0;
}
