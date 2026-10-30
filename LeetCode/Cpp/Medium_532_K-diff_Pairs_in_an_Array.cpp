class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int, int> m;
        for (int num : nums) ++m[num];
        int ans = 0;
        
        for (pair<int, int> p : m){
            if (k == 0){
                if (p.second >= 2) ++ans;
            } else {
                if (m.find(p.first + k) != m.end()) ++ans;
            }
        }
        
        return ans;
    }
};
