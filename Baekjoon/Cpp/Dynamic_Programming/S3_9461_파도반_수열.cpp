#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 9461 파도반 수열
	// dp
	long long dp[101] = { 0 };
	int t, n;

	cin >> t;

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;

	for (int i = 0; i < t; ++i) {
		cin >> n;
		
		for (int j = 6; j <= n; ++j) {
			dp[j] = dp[j - 5] + dp[j - 1];
		}

		cout << dp[n] << '\n';
	}

	return 0;
}
