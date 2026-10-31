class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        if (!next_permutation(s.begin(), s.end())) return -1;
        long ans = stol(s);
        return (ans > INT_MAX) ? -1 : ans;
    }
};
