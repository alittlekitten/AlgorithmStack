#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26332 Buying in Bulk
	// 수학
	int n, c, p;
	cin >> n;
	while (n--) {
		cin >> c >> p;
		cout << c << ' ' << p << '\n' << p * c - 2 * (c - 1) << '\n';
	}

	return 0;
}
