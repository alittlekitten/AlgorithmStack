#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24783 Number Fun
	// 수학
	int n, a, b, c;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a >> b >> c;
		bool chk = false;

		if (a + b == c) chk = true;
		if (a - b == c) chk = true;
		if (b - a == c) chk = true;
		if (a * b == c) chk = true;
		if (b != 0 && a % b == 0 && a / b == c) chk = true;
		if (a != 0 && b % a == 0 && b / a == c) chk = true;

		if (chk) cout << "Possible\n";
		else cout << "Impossible\n";
	}

	return 0;
}
