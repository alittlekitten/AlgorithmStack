class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set <int> s;
        vector <int> v;

        for(auto n : nums) s.insert(n);
        for(auto elem : s) v.push_back(elem);

        sort(v.rbegin(), v.rend());

        if(v.size() < 3) return v[0];
        return v[2];
    }
};
