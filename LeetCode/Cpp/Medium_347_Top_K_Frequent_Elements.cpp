class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i = 0 ; i < nums.size(); ++i) ++m[nums[i]];
        vector<int> v;
        priority_queue<pair<int,int>> pq;
        
        for (auto it = m.begin(); it != m.end(); ++it) {
            pq.push(make_pair(it->second, it->first));
            if (pq.size() > m.size() - k) {
                v.push_back(pq.top().second);
                pq.pop();
            }
        }
        
        return v;
    }
};
