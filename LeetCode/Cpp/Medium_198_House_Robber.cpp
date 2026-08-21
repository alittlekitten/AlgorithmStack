class Solution {
public:
    int rob(vector<int>& nums) {
        int tmp;
        int tmp2 = nums[0];
        int ans;

        if (nums.size() == 1) return tmp2;

        tmp = max(nums[0], nums[1]);
        ans = tmp;

        for (int i = 2; i < nums.size(); ++i) {
            ans = max(tmp, tmp2 + nums[i]);
            tmp2 = tmp;
            tmp = ans;
        }
        
        return ans;
    }
};
