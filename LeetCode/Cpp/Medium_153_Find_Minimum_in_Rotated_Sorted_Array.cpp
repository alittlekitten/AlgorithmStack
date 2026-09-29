class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
		int m = 0;

		while (1) {
			if (nums[l] > nums[r]) {
				m = (r + l) / 2;
				if (nums[l] > nums[m]) r = m;
				else l = m + 1;
			}
			else break;
		}
		return nums[l];
    }
};
