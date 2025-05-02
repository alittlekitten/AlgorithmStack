#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1049 기타줄
	// 수학
	int n, m, x, y;
	int package = 1000;
	int single = 1000;
	cin >> n >> m;

	while (m--) {
		cin >> x >> y;
		package = min(package, x);
		single = min(single, y);
	}

	cout << min((n / 6 + 1) * package, min(n / 6 * package + n % 6 * single, n * single));

	return 0;
}
