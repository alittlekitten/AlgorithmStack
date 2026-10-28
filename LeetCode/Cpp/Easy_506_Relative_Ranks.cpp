class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> v(score.size());
        map<int, int> m;
        for (int i = 0; i < score.size(); ++i) m[score[i]] = i;
        int rank = score.size();
        for(auto a : m) {
            if (rank == 1) v[a.second] = "Gold Medal";
            else if (rank == 2) v[a.second] = "Silver Medal";
            else if(rank == 3) v[a.second] = "Bronze Medal";
            else v[a.second] = to_string(rank);
            --rank;
        }
        return v;
    }
};
