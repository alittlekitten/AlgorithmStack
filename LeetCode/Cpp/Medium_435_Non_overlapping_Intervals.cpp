class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int tmp = -50000;
        int ans = 0;
        for (auto a : intervals){
            if (a[0] >= tmp) tmp = a[1]; 
            else {
                ++ans;
                if (tmp > a[1]) tmp = a[1];
            }
                
        }
        return ans;
    }
};
