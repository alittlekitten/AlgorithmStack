#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// dp
	int dp[1001] = { 0 };
	int n;
	dp[1] = 1;
	dp[2] = 3;

	cin >> n;
	for (int i = 3; i <= n; ++i) {
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
	}

	cout << dp[n];

	return 0;
}
