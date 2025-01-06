#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11051 이항 계수 2
	// DP, 수학
	int n, k;
	int dp[1001][1001] = { 0 };
	cin >> n >> k;

	dp[0][0] = 1;
	dp[1][0] = 1;
	dp[1][1] = 1;

	for (int i = 2; i <= n; ++i) {
		for (int j = 0; j <= i; ++j) {
			if (j == 0) dp[i][0] = 1;
			else if (j == i) dp[i][j] = 1;
			else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
		}
	}

	cout << dp[n][k];

	return 0;
}
