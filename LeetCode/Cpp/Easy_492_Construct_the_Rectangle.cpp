class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector <int> v;
        for(int i = 1; i <= area; ++i) if (area % i == 0) v.push_back(i);
        if (v.size() % 2) return {v[v.size() / 2], v[v.size() / 2]};
        return {v[v.size() / 2], v[v.size() / 2 - 1]};
    }
};
