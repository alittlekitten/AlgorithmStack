class Solution {
public:
    bool divisorGame(int n) {
        int cnt = 0;
        while (n > 1) {
            ++cnt;
            --n;
        }
        if (cnt % 2 == 1) return true;
        else return false;
    }
};
