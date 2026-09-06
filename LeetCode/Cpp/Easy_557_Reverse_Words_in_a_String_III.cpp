class Solution {
public:
    vector<string> split(string input, char c){
        vector<string> v;
        stringstream ss(input);
        string s;
        while (getline(ss, s, c)) v.push_back(s);
        return v;
    }

    string reverseWords(string s) {
        vector<string> v = split(s, ' ');
        string ans;
        for (auto vs : v) {
            reverse(vs.begin(), vs.end());
            ans += vs + " ";
        }
        ans.pop_back();
        return ans;
    }
};
