class Solution {
public:
    int findComplement(int num) {
        int l = 0;
        int n = num;
        
        while(n) {
            ++l;
            n >>= 1;
        }

        int bm = (1L << l) - 1;
        return num ^ bm;
    }
};
