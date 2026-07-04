class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxValue = 0;
        int minValue = prices[0];
        
        for(int i = 0; i < prices.size(); ++i){
            if (prices[i] < minValue) minValue = prices[i];
            if ((prices[i] - minValue) > maxValue) maxValue = prices[i] - minValue;     
        }
        return maxValue;
    }
};
