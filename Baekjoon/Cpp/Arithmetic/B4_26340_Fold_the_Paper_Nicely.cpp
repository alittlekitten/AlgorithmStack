#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26340 Fold the Paper Nicely
	// 수학
	int n, a, b, c;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		cout << "Data set: " << a << ' ' << b << ' ' << c << '\n';
		if (a < b) swap(a, b);
		while (c--) {
			a /= 2;
			if (a < b) swap(a, b);
		}

		cout << a << ' ' << b << "\n\n";
	}

	return 0;
}
