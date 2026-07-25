class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        
        string s = countAndSay(n - 1);
        char c = s[0];
        int cnt = 1;
        string ans = "";
        
        for (int i = 1; i < s.size(); ++i){
            if (s[i] == c) ++cnt;
            else {
                ans += to_string(cnt) + c;
                c = s[i];
                cnt = 1;
            }
        }
        
        ans += to_string(cnt) + c;
        return ans;
    }
};
