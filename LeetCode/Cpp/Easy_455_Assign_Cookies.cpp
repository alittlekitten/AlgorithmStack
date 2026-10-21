class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int ans = 0;
        int tmp = 0;
        
        while (ans < g.size() && tmp < s.size()) {
            if (s[tmp] >= g[ans]) ++ans;
            ++tmp;
        }
        
        return ans;
    }
};
