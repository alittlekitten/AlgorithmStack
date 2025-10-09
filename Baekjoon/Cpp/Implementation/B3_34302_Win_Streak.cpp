#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34302 Win Streak
	// 구현
	int n, s, t;
	cin >> n;

	int maxValue = 0;
	int now = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s >> t;
		if (s > t) ++now;
		else now = 0;

		if (now > maxValue) maxValue = now;
	}
	cout << maxValue;

	return 0;
}
