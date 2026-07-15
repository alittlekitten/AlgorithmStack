class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        map <int, int> m;
        
        for(auto n : nums1) ++m[n];
        for(auto n : nums2) {
            if (m[n]) {
                --m[n];
                v.push_back(n);
            }
        }

        return v;
    }
};
