#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9658 돌 게임 4
	// DP
	int n;
	int dp[1001] = { 0 };
	cin >> n;
	dp[2] = 1;
	dp[4] = 1;
	dp[5] = 1;

	for (int i = 6; i <= n; ++i) {
		if (!(dp[i - 1] && dp[i - 3] && dp[i - 4])) dp[i] = 1;
	}

	//결과 출력
	if (dp[n]) cout << "SK";
	else cout << "CY";

	return 0;
}
