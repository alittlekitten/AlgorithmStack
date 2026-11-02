class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<bool> v(nums.size());
        int ans = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (!v[i]) {
                int curr = i;
                int cnt = 0;
                while (!v[curr]) {
                    v[curr] = true;
                    curr = nums[curr];
                    ++cnt;
                }
                
                ans = max(ans, cnt);
            }
        }
        
        return ans;
    }
};
