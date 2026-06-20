class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans = "";
        string f = strs[0];
        string l = strs[strs.size() - 1];
        for (int i = 0; i < strs[0].size(); ++i) { 
            if (f[i] == l[i]) ans += f[i];
            else break;
        }
        return ans;
    }
};
