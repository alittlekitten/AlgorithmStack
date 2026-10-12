class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        if (n == 1) return 10;
        
        int ans = 10;
        int tmp = 9;
        
        for (int i = 0; i < n - 1; ++i) {
            tmp *= (9 - i);
            ans += tmp;
        }
        
        return ans;
    }
};
