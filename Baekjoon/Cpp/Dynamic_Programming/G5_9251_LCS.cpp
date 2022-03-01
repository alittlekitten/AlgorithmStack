#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 9251 LCS
    // DP

    int dp[1001][1001] = { 0 };
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s2.size(); ++i) {
        for (int j = 0; j < s1.size(); ++j) {
            // 서로 다르면 왼쪽이나 위쪽중 큰 값, 같으면 왼쪽 위에서 +1 
            if (s1[j] == s2[i]) dp[i + 1][j + 1] = dp[i][j] + 1;
            else dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
    }

    cout << dp[s2.size()][s1.size()];

    return 0;
}
