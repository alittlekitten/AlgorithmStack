#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 9657 돌 게임 3
	// 수학, DP
	int n;
	int dp[1001] = { 0 };
	cin >> n;

	dp[1] = 1;
	dp[2] = 0;
	dp[3] = 1;
	dp[4] = 1;
	dp[5] = 1;

	for (int i = 6; i <= n; ++i) {
		dp[i] = 0;
		if (!dp[i - 1]) dp[i] = 1;
		if (!dp[i - 3]) dp[i] = 1;
		if (!dp[i - 4]) dp[i] = 1;
	}

	if (dp[n]) cout << "SK";
	else cout << "CY";

	return 0;
}
