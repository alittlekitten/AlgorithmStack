class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char, int> m;
        for(auto a : magazine) ++m[a];
        for(auto a : ransomNote) {
            if(!m[a]) return false;
            --m[a];
        }
        return true;
    }
};
