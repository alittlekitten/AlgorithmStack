class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (is_sorted(nums.begin(),nums.end())) return true;
        else if (is_sorted(nums.begin(), nums.end(), greater<int>())) return true;
        return false;
    }
};
