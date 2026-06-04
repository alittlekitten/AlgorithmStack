class Solution {
public:
    string reverseOnlyLetters(string s) {
        int idx = s.size() - 1;
        string ans = s;

        for (int i = 0; i < s.size(); ++i) {
            if (isalpha(s[i])) {
                while (!isalpha(s[idx])) --idx;
                ans[i] = s[idx--];
            }
        }

        return ans;
    }
};
