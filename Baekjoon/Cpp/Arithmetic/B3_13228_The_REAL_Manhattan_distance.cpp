#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13228 The REAL Manhattan distance
	// 수학
	int t, x1, y1, f1, x2, y2, f2;
	cin >> t;

	while (t--) {
		cin >> x1 >> y1 >> f1 >> x2 >> y2 >> f2;
		cout << abs(x1 - x2) + abs(y1 - y2) + f1 + f2 << '\n';
	}

	return 0;
}
