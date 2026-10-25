class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0;
        int minbuy = INT_MAX;
        int profit;

        for(int i=0;i<prices.size();i++){
            if(prices[i]<minbuy){
                minbuy = prices[i];
            }
            profit = prices[i] - minbuy;
            if(profit>MaxProfit){
                MaxProfit = profit;
            }
            
        }return MaxProfit;
    }
};