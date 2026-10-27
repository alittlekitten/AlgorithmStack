class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string pos = "12210111011122000010020202"; 
        std::vector<std::string> ans;

        for (auto w : words) {
            if (w.empty()) continue;
            bool chk = true;
            for (char c : w) {
                if (pos[tolower(c) - 'a'] != pos[tolower(w[0]) - 'a']) {
                    chk = false;
                    break;
                }
            }
            if (chk) ans.push_back(w);
        }

        return ans;
    }
};
