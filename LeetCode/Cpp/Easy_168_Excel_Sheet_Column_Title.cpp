class Solution {
public:
    string convertToTitle(int columnNumber) {
        vector<int> v;
        string ans = "";

        while(columnNumber) {
            --columnNumber;
            v.push_back(columnNumber % 26);
            columnNumber /= 26;
        }
        reverse(v.begin(), v.end());

        for(auto a : v) ans += a + 'A';
        return ans;
    }
};
