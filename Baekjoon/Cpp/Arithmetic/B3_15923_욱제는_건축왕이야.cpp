#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15923 욱제는 건축왕이야!!
	// 수학
	int n, x, y, x1, y1, x2, y2;
	int ans = 0;
	cin >> n >> x1 >> y1;
	x = x1, y = y1;
	for (int i = 0; i < n - 1; ++i) {
		cin >> x2 >> y2;
		ans += abs(x2 + y2 - x - y);
		x = x2, y = y2;
	}
	ans += abs(x + y - x1 - y1);
	cout << ans;

	return 0;
}
