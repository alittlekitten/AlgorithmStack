class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        vector<string> v(numRows);
        int chk = -1;
        int loc = 0;

        for (int i = 0; i < s.length(); ++i) {
            v[loc] += s[i];
            if (loc == 0 || loc == numRows - 1) chk *= -1;
            loc += chk;
        }

        string ans = "";
        for (int i = 0; i < numRows; ++i) ans += v[i];

        return ans;
    }
};
