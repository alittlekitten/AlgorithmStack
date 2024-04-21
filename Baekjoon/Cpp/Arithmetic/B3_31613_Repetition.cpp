#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31613 繰り返し (Repetition)
	// 수학
	int x, n;
	cin >> x >> n;
	int ans = 0;
	while (1) {
		++ans;
		if (x % 3 == 0) ++x;
		else if (x % 3 == 1) x *= 2;
		else x *= 3;

		if (x >= n) break;
	}
	cout << ans;

	return 0;
}
