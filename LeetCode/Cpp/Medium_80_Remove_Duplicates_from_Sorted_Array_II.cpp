class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 0;
        int tmp = 2;
        
        for (int i = 0; i < nums.size(); ++i){
            if (ans < tmp || nums[i] != nums[ans - tmp]){
                nums[ans++] = nums[i];
            }
        }
        
        return ans;
    }
};
