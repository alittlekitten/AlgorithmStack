class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> v(26, 0);
        vector<bool> chk(26, false);
        string ans = "";

        for (int i = 0; i < s.size(); ++i) v[s[i] - 'a'] = i;

        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];

            if (chk[c - 'a']) continue;
            while (!ans.empty() && ans.back() > c && v[ans.back() - 'a'] > i) {
                chk[ans.back() - 'a'] = false;
                ans.pop_back();
            }

            ans.push_back(c);
            chk[c - 'a'] = true;
        }

        return ans;
    }
};
