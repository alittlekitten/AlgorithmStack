class Solution {
public:
    bool rotateString(string s, string goal) {
        for (int i = 0; i < s.size(); ++i) {
            string ss = s;
            for (int j = 0; j < i; ++j) ss = ss.substr(1) + ss[0];
            if (ss == goal) return true;
        }
        return false;
    }
};
