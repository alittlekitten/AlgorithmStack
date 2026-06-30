class Solution {
public:
    bool isHappy(int n) {
        string s = to_string(n);
        map <int,int> m;
        while (true) {
            int sum = 0;
            for(auto a : s) sum += pow(a - '0', 2);
            if (m[sum] || s == "1") break;
            s = to_string(sum);
            m[sum] = 1;
        }
        return s == "1";
    }
};
