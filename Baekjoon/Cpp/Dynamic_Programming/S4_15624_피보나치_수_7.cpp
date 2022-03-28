#include <iostream>

using namespace std;

long long dp[1000001];

void fibo() {
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < 1000001; ++i) {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000007;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 15624 피보나치 수 7
    // dp
    // 문제 하나를 푸니까 줄줄이소시지

    int n;
    cin >> n;
    fibo(); // 피보나치 수열 만들기
    cout << dp[n];
}
