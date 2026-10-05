class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector<int> v(citations.size() + 1, 0);
        
        for (int citation : citations) v[min<int>(citations.size(), citation)]++;
        
        int cnt = 0;
        for(int i = citations.size(); i >= 0; --i){
            cnt += v[i];
            if (cnt >= i) return i;
        }
        
        return 0;
    }
};
