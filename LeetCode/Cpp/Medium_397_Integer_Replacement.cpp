class Solution {
public:
    int integerReplacement(int n) {
        long long tmp = n;
        int ans = 0;
        while (tmp > 1) {
            if (tmp % 2 == 0) tmp /= 2;
            else if (tmp == 3 || (tmp & 3) == 1) --tmp;
            else ++tmp;
            ++ans;
        }
        return ans;
    }
};
