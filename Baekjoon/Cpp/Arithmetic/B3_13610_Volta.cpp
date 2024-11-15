#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13610 Volta
	// 수학
	int x, y;
	cin >> x >> y;

	int ans = 1;
	while ((y - x) * ans < y) ++ans;
	cout << ans;

	return 0;
}
