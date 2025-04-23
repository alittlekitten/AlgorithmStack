#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32981 찐 Even Number
	// dp
	long long q, n;
	long long dp[10000001] = { 0 };
	dp[1] = 5;
	dp[2] = 20;
	for (int i = 3; i < 10000001; ++i) {
		dp[i] = (dp[i - 1] * 5) % 1000000007;
	}

	cin >> q;
	while (q--) {
		cin >> n;
		cout << dp[n] << '\n';
	}

	return 0;
}
