class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        map <char, int> m;
        for(auto c : s) ++m[c];
        for(auto c : t) {
            if(!m[c]) { 
                ans = c;
                break;
            }
            --m[c];
        }
        return ans;
    }
};
