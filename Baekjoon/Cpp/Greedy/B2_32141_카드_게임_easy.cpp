#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32141 카드 게임 (Easy)
	// 그리디
	int n, h, d;
	int ans = 0;
	cin >> n >> h;
	for (int i = 0; i < n; ++i) {
		cin >> d;
		++ans;
		h -= d;
		if (h <= 0) {
			cout << ans;
			return 0;
		}
	}
	cout << -1;

	return 0;
}
