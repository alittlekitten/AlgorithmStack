#include <iostream>

using namespace std;

long long dp[1500002];

void fibo() {
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < 1500001; ++i) {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2749 피보나치 수 3
    // 피사노 주기, 행렬곱
    // 11444번 피보나치 6에 있는걸 그대로 가져다 써도 정답
    // 하지만 이 문제는 나누는 수가 1000000으로 작기 때문에 dp로 메모이제이션 하는 방식으로도 해결 가능

    long long n;
    cin >> n;
    fibo(); // 피보나치 수열 만들기
    cout << dp[n % 1500000];
}
