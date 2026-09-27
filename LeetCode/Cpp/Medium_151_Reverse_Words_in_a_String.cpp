class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string tmp;
        vector<string> v;
        
        while (ss >> tmp) v.push_back(tmp);
        reverse(v.begin(), v.end());
        
        string ans = "";
        for (size_t i = 0; i < v.size(); ++i) {
            ans += v[i];
            if (i != v.size() - 1) ans += " ";
        }
        
        return ans;
    }
};
