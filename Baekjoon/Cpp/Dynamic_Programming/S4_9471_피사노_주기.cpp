#include <iostream>

using namespace std;
long long dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 9471 피사노 주기
    // dp
    int p, n, m;
    cin >> p;
    
    for (int i = 0; i < p; ++i) {
        cin >> n >> m;
        dp[0] = 0;
        dp[1] = 1;
        for (int j = 2; j < 1000001; ++j) {
            dp[j] = (dp[j - 1] + dp[j - 2]) % m;
            if (dp[j] == 1 && dp[j - 1] == 0) {
                cout << i + 1 << " " << j - 1 << '\n';
                break;
            }
        }
    }

    return 0;
}
