#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3344 N-Queen
	// 조건분기, 애드혹
	int n;
	bool odd = false;
	cin >> n;

	// https://en.wikipedia.org/wiki/Eight_queens_puzzle#Existence_of_solutions 참고
	if (n % 2) odd = true;

	if ((!odd && n % 6 != 2) || (odd && (n - 1) % 6 != 2)) {
		if (odd) --n;
		for (int i = 1; i <= n / 2; ++i) cout << i * 2 << '\n';
		for (int i = 1; i <= n / 2; ++i) cout << i * 2 - 1 << '\n';
		if (odd) cout << n + 1;
	}

	else if ((!odd && n / 6 != 0) || (odd && (n - 1) / 6 != 2)) {
		if (odd) --n;
		for (int i = 1; i <= n / 2; ++i) cout << 1 + (2 * i + n / 2 - 3) % n << '\n';
		for (int i = n / 2; i > 0; --i) cout << n - (2 * i + n / 2 - 3) % n << '\n';
		if (odd) cout << n + 1;
	}

	return 0;
}
