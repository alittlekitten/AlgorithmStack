#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16565 N포커
	// DP, 조합론
	int n;
	int dp[53][53] = { 0 };
	cin >> n;

	for (int i = 0; i <= 52; ++i) {
		dp[i][0] = 1;
		dp[i][i] = 1;
		for (int j = 1; j < i; ++j) {
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			dp[i][j] %= 10007;
			dp[i][i - j] = dp[i][j];
		}
	}

	int ans = 0;
	for (int i = 4; i <= n; i += 4) {
		if ((i / 4) % 2 == 1) ans += dp[13][i / 4] * dp[52 - i][n - i];
		else ans -= dp[13][i / 4] * dp[52 - i][n - i];
		ans %= 10007;
		if (ans < 0) ans += 10007;
	}
	cout << ans;

	return 0;
}
