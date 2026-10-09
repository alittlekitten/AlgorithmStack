class Solution {
public:
    bool isValidSerialization(string preorder) {
        int ans = 1;
        stringstream ss(preorder);
        string s;
        
        while (getline(ss, s, ',')) {
            --ans;
            if (ans < 0) return false;
            if (s != "#") ans += 2;
        }
        
        return ans == 0;
    }
};
