class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;
        int piv = 1;

        for (int i = 0; i < 32; ++i) {
            if (n & piv) ans |= 1 << (31 - i);
            piv <<= 1;
        }
        return ans;
    }
};
