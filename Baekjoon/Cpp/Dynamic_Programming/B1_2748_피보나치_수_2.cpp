#include <iostream>

using namespace std;

long long dp[91];

void fibo() {
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < 91; ++i) {
        dp[i] = (dp[i - 2] + dp[i - 1]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2748 피보나치 수 2
    // dp
    // 이친구.. visual studio는 알아서 int형태의 부족한 인덱스값을 잡아준다.

    int n;
    cin >> n;
    fibo(); // 피보나치 수열 만들기
    cout << dp[n];
}
