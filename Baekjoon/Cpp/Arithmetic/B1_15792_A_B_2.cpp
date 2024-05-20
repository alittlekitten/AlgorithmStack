#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15792 A/B - 2
	// 수학
	int a, b;
	cin >> a >> b;
	cout << a / b << ".";
	a %= b;

	for (int i = 0; i <= 1000; ++i) {
		a *= 10;
		cout << a / b;
		a -= (a / b) * b;
	}

	return 0;
}
