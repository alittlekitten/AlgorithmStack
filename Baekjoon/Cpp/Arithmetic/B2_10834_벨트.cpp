#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10834 벨트
	// 수학
	int m, x, y, s;
	int ans = 1;
	int direction = 0;
	cin >> m;

	while (m--) {
		cin >> x >> y >> s;
		ans /= x;
		ans *= y;
		direction ^= s;
	}

	cout << direction << ' ' << ans;

	return 0;
}
