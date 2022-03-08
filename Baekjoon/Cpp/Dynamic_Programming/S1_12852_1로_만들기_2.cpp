#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 12852 1로 만들기2
    // DP

    int n;
    cin >> n;
    int dp[1000001] = { 0 }; // dp
    int next[1000001] = { 0 }; // 다음값 저장

    // 초기값 설정
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    next[1] = 0;
    next[2] = 1;
    next[3] = 1;

    // dp와 next 계산
    for (int i = 4; i <= n; ++i) {
        dp[i] = dp[i - 1] + 1;
        next[i] = i - 1;
        if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
            next[i] = i / 3;
            dp[i] = dp[i / 3] + 1;
        }
        if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) {
            next[i] = i / 2;
            dp[i] = dp[i / 2] + 1;
        }
    }

    // 출력부
    cout << dp[n] << '\n';

    int tmp = n; // 트래킹용 변수
    while (true) {
        cout << tmp << " ";
        tmp = next[tmp];
        if (tmp == 0) break;
    }

    return 0;
}
