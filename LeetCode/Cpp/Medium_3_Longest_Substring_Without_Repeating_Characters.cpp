class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> v;
	    int ans = 0;
        for (int i = 0; i < s.size(); ++i) {
            vector<char>::iterator iter = find(v.begin(), v.end(), s[i]);
            if (iter != v.end()) {
                if (ans < v.size()) ans = v.size();
                v.erase(v.begin(), ++iter);
                v.push_back(s[i]);
            }
            else v.push_back(s[i]);
        }
        if (ans < v.size()) ans = v.size();

        return ans;
    }
};
