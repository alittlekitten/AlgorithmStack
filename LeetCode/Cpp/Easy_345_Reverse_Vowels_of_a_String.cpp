class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size() - 1;
        string vowels = "aeiouAEIOU";
        char c;
        
        while(l < r){
            while(l < s.size() && vowels.find(s[l]) == string::npos) ++l;
            while(r >= 0 && vowels.find(s[r]) == string::npos) --r;
            
            if (l < r){
                c = s[l];
                s[l] = s[r];
                s[r] = c;
            }

            ++l;
            --r;
        }
        
        return s;
    }
};
