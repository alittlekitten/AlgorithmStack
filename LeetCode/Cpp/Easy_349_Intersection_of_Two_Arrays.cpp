class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        map <int, int> m;
        
        for(auto n : nums1) m[n] = 1;
        for(auto n : nums2) {
            if (m[n]) {
                m[n] = 0;
                v.push_back(n);
            }
        }

        return v;
    }
};
