class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for (int i = 0; i <= rowIndex; ++i) {
            vector<int> v;
            for (int j = 0; j <= i; ++j) {
                if (i == j || j == 0) v.push_back(1);
                else v.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
            }
            ans.push_back(v);
        }
        return ans[rowIndex];
    }
};
