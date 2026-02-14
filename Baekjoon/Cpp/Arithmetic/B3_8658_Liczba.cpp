#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8658 Liczba
	// 수학
	int n, minValue, maxValue;
	cin >> n;

	for (int i = 2; i <= n; ++i) {
		if (n % i) {
			minValue = i;
			break;
		}
	}

	for (int i = n - 1; i >= 2; --i) {
		if (n % i) {
			maxValue = i;
			break;
		}
	}
	cout << minValue << ' ' << maxValue;

	return 0;
}
