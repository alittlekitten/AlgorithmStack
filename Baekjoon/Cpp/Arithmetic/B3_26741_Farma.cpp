#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26741 Farma
	// 수학
	int x, y;
	cin >> x >> y;
	for (int i = 0; i <= x; ++i) {
		if (i * 2 + (x - i) * 4 == y) {
			cout << i << " " << x - i;
			break;
		}
	}

	return 0;
}
