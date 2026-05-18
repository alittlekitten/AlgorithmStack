class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> m;
        for (auto n : nums) ++m[n];
        
        vector<int> ans;
        for (int i = 1; i <= nums.size(); ++i) {
            if (m[i] > 1) ans.push_back(i);
        }
            
        
        for(int i = 1; i <= nums.size(); ++i){
            if (!m[i]) ans.push_back(i);
        }

        return ans;
    }
};
