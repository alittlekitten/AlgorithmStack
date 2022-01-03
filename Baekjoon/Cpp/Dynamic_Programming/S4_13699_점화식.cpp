#include <iostream>
#include <queue>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 13699 점화식
	// dp

	long long dp[36] = { 0 };
	dp[0] = 1;
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < i; ++j) {
			dp[i] += dp[j] * dp[i - j - 1];
		}
	}
	cout << dp[n];

	return 0;
}
