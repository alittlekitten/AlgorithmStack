class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double tmp = 0;
        for(int i = 0; i < k; ++i) tmp += nums[i];
        double ans = tmp;
        
        for(int i = 1; i <= nums.size() - k; ++i){
            tmp = tmp - nums[i - 1] + nums[i + k - 1];
            ans = max(ans, tmp);
        }
        
        return ans / k;
    }
};
