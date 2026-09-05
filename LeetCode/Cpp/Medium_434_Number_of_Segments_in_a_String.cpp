class Solution {
public:
    vector<string> split(string input, char c) {
        vector<string> v;
        stringstream ss(input);
        string s;
        while (getline(ss, s, c)) {
            if (s == "") continue;
            v.push_back(s);
        }
        return v;
    }

    int countSegments(string s) {
        return split(s, ' ').size();
    }
};
