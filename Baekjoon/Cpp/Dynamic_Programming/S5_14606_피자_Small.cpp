#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14606 피자 (Small)
	// DP
	int n;
	int dp[11] = { 0 };
	cin >> n;

	dp[2] = 1;
	for (int i = 3; i <= n; ++i) {
		dp[i] = (i / 2) * (i - (i / 2)) + dp[(i / 2)] + dp[i - (i / 2)];
	}

	cout << dp[n];

	return 0;
}
