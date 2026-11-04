class Solution {
public:
    int minSteps(int n) {
        int ans = 0;
        int tmp = 2;
        
        while (n > 1) {
            while (n % tmp == 0) {
                n /= tmp;
                ans += tmp;
            }
            ++tmp;
        }
        
        return ans;
    }
};
