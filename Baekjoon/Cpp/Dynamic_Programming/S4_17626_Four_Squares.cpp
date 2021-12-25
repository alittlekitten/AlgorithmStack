#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// dp
	int dp[50000] = { 0 };
	int n;
	dp[0] = 0;
	dp[1] = 1;

	cin >> n;
	for (int i = 2; i <= n; ++i) { // 0,1은 지정이 되어있으니 2부터 dp값 찾기
		int tmp1 = 50000; // 최솟값 저장용 변수
		for (int j = 1; j <= sqrt(i); ++j) {
			int tmp2 = i - j * j;
			tmp1 = min(tmp1, dp[tmp2]); // 최솟값 저장하기
		}
		dp[i] = tmp1 + 1;
	}

	cout << dp[n];

	return 0;
}
