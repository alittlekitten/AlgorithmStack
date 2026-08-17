class Solution {
public:
    bool canJump(vector<int>& nums) {
        int idx = 0;
        for (int i = 0; idx < nums.size() && idx <= i; ++idx) i = max(idx + nums[idx], i);
        
        return idx == nums.size();
    }
};
