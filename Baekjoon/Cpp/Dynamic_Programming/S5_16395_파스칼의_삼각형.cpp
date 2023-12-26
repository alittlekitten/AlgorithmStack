#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16395 파스칼의 삼각형
	// DP
	int n, k;
	int dp[31][31] = { 0 };
	cin >> n >> k;

	for (int i = 0; i < n; ++i) dp[i][0] = 1;

	for (int i = 1; i < n; ++i) {
		for (int j = 1; j <= i; ++j) {
			if (j >= k) continue;
			dp[i][j] = dp[i - 1][j - 1];
			if (i - 1 >= j) dp[i][j] += dp[i - 1][j];
		}
	}

	cout << dp[n - 1][k - 1];

	return 0;
}
