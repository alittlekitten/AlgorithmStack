#include <iostream>
using namespace std;

int digitSum(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11874 ZAMKA
	// 브루트포스
	int l, d, x;
	cin >> l >> d >> x;

	int minValue = 0;
	int maxValue = 0;
	for (int i = l; i <= d; ++i) {
		if (digitSum(i) == x) {
			if (minValue == 0) minValue = i;
			maxValue = i;
		}
	}
	cout << minValue << '\n' << maxValue;

	return 0;
}
