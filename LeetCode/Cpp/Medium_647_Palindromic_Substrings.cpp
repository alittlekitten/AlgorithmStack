class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        
        for (int i = 0; i < 2 * s.size() - 1; ++i) {
            int l = i / 2;
            int r = i / 2 + i % 2;
            
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                ++ans;
                --l;
                ++r;
            }
        }
        
        return ans;
    }
};
