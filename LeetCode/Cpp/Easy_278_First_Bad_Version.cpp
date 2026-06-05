class Solution {
public:
    int firstBadVersion(int n) {
        int s = 1;
        int e = n;

        while (s <= e){
            int m = s + (e - s) / 2;
            if (isBadVersion(m)) e = m - 1;
            else s = m + 1;
        }
        return s;
    }
};
