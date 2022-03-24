#include <iostream>

using namespace std;

long long dp[55]; // 10^16 < 2^54
// idx번째 비트가 꽉 찼을 때까지의 1의 개수

long long cnt(long long n) {
	long long ret = n & 1; // 맨 마지막 비트는 직접 확인
	long long i = 54;
	// 제일 앞 비트(큰 숫자)부터 하나씩 제거해가면서 경우의 수를 구한다
	while (i > 0) {
		if (n & (1LL << i)) {
			ret += dp[i - 1] + (n - (1LL << i) + 1);
			n -= 1LL << i;
		}
		--i;
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9527 1의 개수 세기
	// 누적합, DP
	// 범위가 10^16이기 때문에.. O(N)으로도 어림없다.
	// 누적합 개념을 도입해야 풀 수 있다!
  // 구글갓...

	long long a, b;

	// DP 미리 구해놓기
	dp[0] = 1;
	for (int i = 1; i < 55; i++) {
		dp[i] = dp[i - 1] * 2 + (1LL << i);
	}

	cin >> a >> b;
	cout << cnt(b) - cnt(a-1);

	return 0;
}
