class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        int idx = 0;
        // 앞에서부터 팰린드롬인 영역 찾기
        for(int i = 0; i < n; ++i) {
            if(s[idx] == s[n - i - 1]) ++idx;
        }
        // 만약 그 자체로 팰린드롬이면 그대로 출력
        if(idx == n) return s;

        // 팰린드롬이 아닌 영역 구하기
        string res = s.substr(idx, n);
        string reverse_res = res;
        reverse(reverse_res.begin(), reverse_res.end());
    
        return reverse_res + shortestPalindrome(s.substr(0, idx)) + res;
    }
};
