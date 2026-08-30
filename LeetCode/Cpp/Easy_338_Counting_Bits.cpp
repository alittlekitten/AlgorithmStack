class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n + 1);

        for (int i = 0; i <= n; ++i) {
            int cnt = 0;
            int num = i;
            while (num > 0) {
                cnt += num & 1;
                num >>= 1;
            }
            dp[i] = cnt;
        }
        return dp;
    }
};
