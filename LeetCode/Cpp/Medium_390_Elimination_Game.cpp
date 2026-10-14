class Solution {
public:
    int lastRemaining(int n) {
        int ans = 1;
        int tmp = 1;

        while (n > 1) {
            ans += tmp + (n - 2) / 2 * 2 * tmp;
            n /= 2;
            tmp *= -2;
        }

        return ans;
    }  
};
