class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        if (nums.size() < 3) return false;
        
        int tmp = -1000000000;
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (nums[i] < tmp) return true;
            else {
                while (!st.empty() && st.top() < nums[i]) {
                    tmp = st.top();
                    st.pop();
                }
            }
            st.push(nums[i]);
        }
        return false;
    }
};
