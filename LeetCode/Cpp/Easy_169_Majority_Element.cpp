class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        int ans = 0;

        for (int i = 0; i < nums.size(); ++i) ++m[nums[i]];

        for (auto a : m) {
            if (a.second > nums.size() / 2) {
                ans = a.first;
                break;
            }
        }

        return ans;
    }
};
