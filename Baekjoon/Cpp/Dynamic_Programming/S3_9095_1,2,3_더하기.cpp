#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	// dp..?
	// 4는 1+dp[3], 2+dp[2], 3+dp[1]을 이용해서 만들 수 있다.
	// 5는 1+dp[4], 2+dp[3], 3+dp[2]을 이용해서 만들 수 있다.
	// n은 1+dp[n-1], 2+dp[n-2], 3+dp[n-3]을 이용해서 만들 수 있다.
	// dp[n]은 결국 dp[n-1] + dp[n-2] + dp[n-3]이 된다.
	int dp[12] = { 0, };
	dp[1] = 1;
	dp[2] = 2; // 11 2
	dp[3] = 4; // 111 12 21 3
	for (int i = 4; i < 12; ++i) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

	int t, n;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		cout << dp[n] << '\n';
	}
	return 0;
}
