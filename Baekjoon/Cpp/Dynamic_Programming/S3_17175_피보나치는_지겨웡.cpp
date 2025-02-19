#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17175 피보나치는 지겨웡~
	// DP
	int n;
	cin >> n;

	long long dp[51] = { 0 }; // 계산횟수
	dp[0] = 1;
	dp[1] = 1;

	// 1 1 3 5 9 15 25..
	for (int i = 2; i <= 50; ++i) {
		dp[i] = (dp[i - 2] + dp[i - 1] + 1) % 1000000007;
	}

	cout << dp[n];

	return 0;
}
