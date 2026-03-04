#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 35373 A Little Leftover Pizza
	// 수학
	int n, input;
	char c;
	cin >> n;

	int s = 0;
	int m = 0;
	int l = 0;

	for (int i = 0; i < n; ++i) {
		cin >> c >> input;

		if (c == 'S') s += input;
		else if (c == 'M') m += input;
		else if (c == 'L') l += input;
	}

	cout << (s + 6 - 1) / 6 + (m + 8 - 1) / 8 + (l + 12 - 1) / 12;

	return 0;
}
