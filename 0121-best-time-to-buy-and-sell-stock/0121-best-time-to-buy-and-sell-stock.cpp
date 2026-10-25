class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buying = prices[0];
        int maxProfit = 0;

        for(int i = 1 ; i < prices.size() ; i++) {
            int selling = prices[i];
            if(selling > buying) {
                int profit = selling - buying;
                maxProfit = max(maxProfit , profit);
            } else {
                buying = prices[i];
            }
        }
        return maxProfit;
    }
};