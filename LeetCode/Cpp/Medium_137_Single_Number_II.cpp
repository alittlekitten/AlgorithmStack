class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        // 비트를 순회
        for (int i = 0; i < 32; ++i) {
            int cnt = 0;
            // i번째 비트가 1인 것들을 카운트
            for (int n : nums) cnt += n >> i & 1;
            cnt %= 3; // 3번 등장한 숫자 처리
            ans |= cnt << i; // 남은 비트가 정답
        }
        return ans;
    }
};
