class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int r = 0;
        int c = matrix[0].size() - 1;
        while (r >= 0 && r <= matrix.size() - 1 && c >= 0 && c <= matrix[0].size() - 1) {
            if (target == matrix[r][c]) return true;
            else if (target < matrix[r][c]) --c;
            else if (target > matrix[r][c]) ++r;
        }
        return false;
    }
};
