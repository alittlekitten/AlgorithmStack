class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;
        int next = 0;
        for(auto t : timeSeries) {
            if(next > t) ans += duration - (next - t);
            else ans += duration;
            next = t + duration;
        }

        return ans;
    }
};
