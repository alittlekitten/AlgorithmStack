class Solution {
public:
    void dfs(vector<vector<int>>& v, vector<int> nums, int s) {
        if (s == nums.size()) v.push_back(nums);
        else {
            for (int i = s; i < nums.size(); ++i) {
                if (i != s and nums[i] == nums[s]) continue;
                swap(nums[i], nums[s]);
                dfs(v, nums, s + 1);
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        if (nums.size() == 0) return ans;
        dfs(ans, nums, 0);
        return ans;
    }
};
