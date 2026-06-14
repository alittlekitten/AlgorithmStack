class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            int length = 0;
            if (k < s.size() - i) {
                length = k; 
            }
            else {
                length = s.size() - i;
            }
            reverse(s.begin() + i, s.begin() + length + i);
        }
        return s;
    }
};
