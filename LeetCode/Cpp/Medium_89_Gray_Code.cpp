class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> v;
        v.push_back(0);
 
        for (int i=0; i < n; ++i) {
            int tmp = 1 << i;
            for (int j = v.size() - 1; j >= 0; --j) v.push_back(v[j] + tmp);
        }
 
        return v;
    }
};
