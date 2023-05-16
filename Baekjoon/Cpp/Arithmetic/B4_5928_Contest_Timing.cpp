#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5928 Contest Timing
	// 수학
	int d, h, m;
	cin >> d >> h >> m;
	int time = 11 * 60 * 24 + 11 * 60 + 11;
	int ans = d * 60 * 24 + h * 60 + m - time;
	if (ans < 0) cout << -1;
	else cout << ans;
		
	return 0;
}
