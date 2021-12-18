#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 디피
	int n;
	int dp[1001];

	// n 받음
	cin >> n;
	
	dp[1] = 1;
	dp[2] = 2;


	for (int i = 1; i <= n; ++i) {
		if (i == 1) dp[1] = 1;
		else if (i == 2) dp[2] = 2;
		else dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}

	cout << dp[n];
	
	return 0;
}
