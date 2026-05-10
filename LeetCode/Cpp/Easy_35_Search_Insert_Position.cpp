class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto idx = lower_bound(nums.begin(), nums.end(), target);
        if (idx == nums.end()) return nums.size();
        return idx - nums.begin();
    }
};
