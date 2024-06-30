#include <iostream>
using namespace std;

int gcd(int& a, int& b) {
	int tmp = a % b;
	while (tmp) {
		a = b;
		b = tmp;
		tmp = a % b;
	}
	return b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5344 GCD
	// 수학
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		cout << gcd(a, b) << '\n';
	}

	return 0;
}
