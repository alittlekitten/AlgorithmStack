#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1562 계단 수
	// dp, 비트마스킹 - 사실 10844 쉬운 계단 수를 풀었다면 같은 방식에 비트마스킹만 더해서 날먹 가능
	int n;
	int dp[101][10][1 << 10] = { 0 }; // dp[x][y][z] -> x는 숫자의 길이, y는 마지막 숫자, z는 사용한 숫자를 비트마스킹 (1010101010 이면 9,7,5,3,1 쓴거)
	cin >> n;

	// 초기화
	for (int i = 1; i <= 9; ++i) {
		dp[1][i][1 << i] = 1;
	}

	// 비트마스킹으로 현재까지 사용한 수를 OR연산
	for (int i = 2; i <= n; ++i) {
		for (int j = 0; j <= 9; ++j) {
			for (int k = 0; k < 1 << 10; ++k) {
				if (j == 0) {
					dp[i][j][k | 1 << 0] += dp[i - 1][j + 1][k];
					dp[i][j][k | 1 << 0] %= 1000000000;
				}
				else if (j == 9) {
					dp[i][j][k | 1 << 9] += dp[i - 1][j - 1][k];
					dp[i][j][k | 1 << 9] %= 1000000000;
				}
				else {
					dp[i][j][k | 1 << j] += (dp[i - 1][j - 1][k] + dp[i - 1][j + 1][k]) % 1000000000;
					dp[i][j][k | 1 << j] %= 1000000000;
				}
			}
		}
	}

	// 모든 숫자를 이용한 경우 (1023)일 때만 골라서 출력!!
	int ans = 0;
	for (int i = 0; i <= 9; ++i) {
		ans += dp[n][i][1023];
		ans %= 1000000000;
	}

	cout << ans;

	return 0;
}
