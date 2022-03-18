#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1562 쉬운 계단 수
	// dp
	int n;
	int dp[101][10] = { 0 }; // dp[x][y] -> x는 숫자의 길이, y는 마지막 숫자
	cin >> n;
	for (int i = 1; i <= 9; ++i) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; ++i) {
		for (int j = 0; j <= 9; ++j) {
			if (j == 0) dp[i][j] = dp[i - 1][j + 1];
			else if (j == 9) dp[i][j] = dp[i - 1][j - 1];
			else dp[i][j] = dp[i - 1][j - 1] % 1000000000 + dp[i - 1][j + 1] % 1000000000;
		}
	}

	int ans = 0;
	for (int i = 0; i <= 9; ++i) {
		ans = (ans + dp[n][i] % 1000000000) % 1000000000;
	}

	cout << ans;

	return 0;
}
