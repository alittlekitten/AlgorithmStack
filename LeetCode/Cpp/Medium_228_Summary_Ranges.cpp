class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector <string> ans;

        for (int i = 0; i < nums.size(); ++i) {
            int tmp = i;
            long long cnt = nums[i];
            for (int j = i; j < nums.size(); ++j) {
                if (nums[j] != cnt) break;
                cnt++;
                tmp = j;
            }
            if (i != tmp) ans.push_back(to_string(nums[i]) + "->" + to_string(nums[tmp]));
            else ans.push_back(to_string(nums[i]));
            i = tmp;
        }
        return ans;
    }
};
