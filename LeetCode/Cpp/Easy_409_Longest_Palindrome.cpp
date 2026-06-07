class Solution {
public:
    int longestPalindrome(string s) {
        int odds = 0;
        map <char, int> m;
        for(auto c : s) ++m[c];
        for(auto elem : m) {
            if (elem.second % 2) ++odds;
        }
        return s.size() - odds + (odds > 0);
    }
};
