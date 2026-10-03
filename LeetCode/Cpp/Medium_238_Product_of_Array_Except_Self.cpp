class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> v(nums.size(), 1);

		for (int i = 1; i < nums.size(); ++i) {
			v[i] *= nums[i-1];
			v[i] *= v[i -1];
		}

		int tmp = 1;
		for (int i = nums.size() - 2; i >= 0; --i) {
			v[i] *= nums[i + 1];
			v[i] *= tmp;
			tmp *= nums[i + 1];
		}

		return v;
  }
};