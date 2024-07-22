#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14501 퇴사
	// dp
	int n;
	int arr[15][2] = { 0 };
	int dp[15] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i][0] >> arr[i][1];

	for (int i = 0; i < n; ++i) {
		if (i + arr[i][0] <= n) dp[i + arr[i][0]] = max(dp[i + arr[i][0]], dp[i] + arr[i][1]);
		dp[i + 1] = max(dp[i + 1], dp[i]);
	}

	cout << dp[n];

	return 0;
}
