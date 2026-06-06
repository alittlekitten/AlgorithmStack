class Solution {
public:
    int guessNumber(int n) {
        long long l = 1;
        long long r = n - 1;

        while (l <= r){
            long long m = (l + r) / 2;
            int res = guess(m);
            if (res == -1) r = m - 1;
            else if (res == 1) l = m + 1;
            else return m;
        }
        
        return n;
    }
};
