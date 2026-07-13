class NumArray {
public:
    vector <int> v;
    NumArray(vector<int>& nums) {
        v.resize(nums.size(), 0);
        v[0] = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            v[i] = v[i - 1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(!left) return v[right];
        return v[right] - v[left - 1];
    }
};
