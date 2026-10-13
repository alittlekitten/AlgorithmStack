class Solution {
public:
    int getSum(int a, int b) {
        while(b) {
            int x = a ^ b;
            int y = (a & b) << 1;
            a = x; 
            b = y;
        }
        return a;
    }
};
