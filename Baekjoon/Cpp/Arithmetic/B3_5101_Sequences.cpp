#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5101 Sequences
	// 수학
	int a, b, c, ans;
	while (1) {
		cin >> a >> b >> c;
		if (!a && !b && !c) break;
		ans = c - a + b;

		if (ans % b || (b && a > c)) cout << "X" << '\n';
		else cout << ans / b << '\n';
	}

	return 0;
}
