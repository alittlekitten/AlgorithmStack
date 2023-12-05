#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2783 삼각 김밥
	// 수학
	float a, b, n;
	cin >> a >> b;
	float min = a / b;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (min > a / b) min = a / b;
	}

	cout << fixed;
	cout.precision(2);

	cout << min * 1000;

	return 0;
}
