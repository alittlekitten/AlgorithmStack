class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> v(nums.size());
        vector<int> ans;

        for (int i = 0; i < nums.size(); ++i) v[nums[i] - 1] = true;
        for (int i = 0; i < nums.size(); ++i) {
            if (v[i]) continue;
            ans.push_back(i + 1);
        }

        return ans;
    }
};
