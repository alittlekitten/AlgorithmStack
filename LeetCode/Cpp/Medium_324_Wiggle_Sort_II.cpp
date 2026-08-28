class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> v = nums;
        sort(v.begin(), v.end());
        
        int n = nums.size();
        int l = (n - 1) / 2;
        int r = n - 1;
        
        for (int i = 0; i < n; i += 2) nums[i] = v[l--];
        for (int i = 1; i < n; i += 2) nums[i] = v[r--];
    }
};
