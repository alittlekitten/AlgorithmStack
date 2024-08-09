#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 12920 평범한 배낭 2
	// DP, 냅색
	int n, m, v, c, k, tmp;
	int dp[10001] = { 0 };
	cin >> n >> m;

	// 냅색
	for (int i = 0; i < n; ++i) {
		cin >> v >> c >> k;
		int items = 1;
		while (k) {
			tmp = min(k, items);
			for (int j = m; j >= v * tmp; --j) {
				if (dp[j - tmp * v] || j == tmp * v) dp[j] = max(dp[j - v * tmp] + c * tmp, dp[j]);
			}

			// 물건의 개수를 2의 제곱수의 합으로 분할
			// 같은 종류의 물건의 개수가 2개 이상이므로 비트마스킹으로 처리
			items <<= 1;
			k -= tmp;
		}
	}
	
	int ans = 0;
	for (int i = 0; i <= m; ++i) ans = max(dp[i], ans);
	cout << ans;

	return 0;
}
