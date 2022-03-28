#include <iostream>

using namespace std;

int dp[46];

void fibo() {
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < 46; ++i) {
        dp[i] = (dp[i - 2] + dp[i - 1]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2747 피보나치 수
    // dp
    // 얘는 int를 써도 되네..?

    int n;
    cin >> n;
    fibo(); // 피보나치 수열 만들기
    cout << dp[n];
}
