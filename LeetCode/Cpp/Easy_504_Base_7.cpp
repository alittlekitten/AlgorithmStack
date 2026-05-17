class Solution {
public:
    string convertToBase7(int num) {
        if (!num) return "0";
        
        int tmp = abs(num);
        string ans;
        
        while (tmp) {
            ans += to_string(tmp % 7);
            tmp /= 7;
        }
        
        if (num < 0) ans += "-";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
