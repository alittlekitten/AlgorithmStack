class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
        int ans = 0;
        int cnt = 0;
        int l = 0;

        for (int r = 0; r < s.size(); ++r) {
            ++count[s[r] - 'A'];
            cnt = max(cnt, count[s[r] - 'A']);

            if ((r - l + 1) - cnt > k) {
                --count[s[l] - 'A'];
                ++l;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};
