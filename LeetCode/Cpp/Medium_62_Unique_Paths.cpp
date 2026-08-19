class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> arr(m + 1, 1);
        arr[0] = 0;
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j <= m; ++j) arr[j] += arr[j - 1];
        }
        
        return arr[m];
    }
};
