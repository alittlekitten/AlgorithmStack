class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        unsigned int x = num;
        string ans;

        while (x > 0) {
            int n = x % 16;
            char c;
            if (n < 10) c = n + '0';
            else c = 'a' + n - 10 ;
            ans = c + ans;
            x /= 16;
        }
        return ans;
    }
};
