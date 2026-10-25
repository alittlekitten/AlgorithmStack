class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ss;
        string ans;
        for(auto c : s) if (c != '-') ss += c;
        for(auto &a : ss) a = toupper(a);
        int len = ss.size() % k;
        ans = ss.substr(0, len);

        if (ans != "" && ans != s) ans += "-";
        for (int i = len; i < ss.size(); i += k) {
            if (i != len) ans += "-";
            ans += ss.substr(i, k);
        }
        return ans;
    }
};
