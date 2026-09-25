class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> v(ratings.size(), 1);
        for (int i = 1; i < ratings.size(); ++i){
            if (ratings[i] <= ratings[i - 1]) continue;
            v[i] = 1 + v[i - 1];
        }
        
        for (int i = ratings.size() - 2; i >= 0; --i){
            if (ratings[i] <= ratings[i + 1]) continue;
            if (v[i] >= v[i + 1] + 1) continue;
            v[i] = 1 + v[i + 1];
        }
        
        int ans = 0;
        for(int i = 0; i < ratings.size(); ++i) ans += v[i];

        return ans;
    }
};
