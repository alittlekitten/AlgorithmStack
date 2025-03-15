#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1727 커플 만들기
	// DP
	int n, m, input;
	int dp[1001][1001] = { 0 };
	vector<int> v1;
	vector<int> v2;
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		v1.push_back(input);
	}
	sort(v1.begin(), v1.end());

	for (int i = 0; i < m; ++i) {
		cin >> input;
		v2.push_back(input);
	}
	sort(v2.begin(), v2.end());

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			if (i == j) dp[i][j] = dp[i - 1][j - 1] + abs(v1[i - 1] - v2[j - 1]);
			else if (i > j) dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1] + abs(v1[i - 1] - v2[j - 1]));
			else dp[i][j] = min(dp[i][j - 1], dp[i - 1][j - 1] + abs(v1[i - 1] - v2[j - 1]));
		}
	}

	cout << dp[n][m];

	return 0;
}
