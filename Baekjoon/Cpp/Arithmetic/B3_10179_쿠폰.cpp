#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10179 쿠폰
	// 수학
	int n;
	double price;
	cin >> n;
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < n; ++i) {
		cin >> price;
		cout << "$" << round(price * 100) * 0.8 / 100 << '\n';
	}

	return 0;
}
