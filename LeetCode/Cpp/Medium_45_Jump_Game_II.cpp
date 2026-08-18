class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0;
        int tmp = 0;
        int maxValue = 0;
        
        for (int i = 0; i < nums.size() - 1; ++i) {
            maxValue = max(maxValue, i + nums[i]);
            
            if (i == tmp) {
                ++ans;
                tmp = maxValue;
            }
        }
        return ans;
    }
};
