class Solution {
public:
    int magicalString(int n) {
        string s = "122";
        int i = 2;
        while (s.size() < n) {
            char c = (s.back() == '1') ? '2' : '1';
            s.append(s[i] - '0', c);
            ++i;
        }
        return count(s.begin(), s.begin() + n, '1');
    }
};
