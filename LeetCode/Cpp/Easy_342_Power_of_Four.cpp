class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) return true;
        else if (n < 1) return false;
        
        while (1) {   
            if (n % 4 != 0) return false;
            else if (n == 4) break;
            n /= 4;
        }
        
        return true;  
    }
};
