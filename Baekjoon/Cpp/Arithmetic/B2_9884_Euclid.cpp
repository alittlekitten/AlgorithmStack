#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9884 Euclid
	// 수학
	int a, b;
	cin >> a >> b;

	while (a != b) {
		if (a > b) a = a - b;
		else b = b - a;
	}

	cout << a;

	return 0;
}
