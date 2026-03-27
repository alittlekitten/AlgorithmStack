#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13236 Collatz Conjecture
	// 수학
	int n;
	cin >> n;
	while (n != 1) {
		cout << n << " ";
		if (n & 1) n = n * 3 + 1;
		else n /= 2;
	}
	cout << 1;

	return 0;
}
