class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxValue = nums[0];
        int minValue = nums[0];
        int ans = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            int curr = nums[i];
            int tmp = maxValue;
            maxValue = max({curr, curr * maxValue, curr * minValue});
            minValue = min({curr, curr * tmp, curr * minValue});
            ans = max(ans, maxValue);
        }
        
        return ans;
    }
};
