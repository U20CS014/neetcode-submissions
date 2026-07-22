class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int dp1buy = 0; 
        int dp2buy = 0;
        int dp1sell = 0;

        for(int i = prices.size() - 1; i >= 0; --i){

            int dpbuy = max(dp1sell - prices[i] , dp1buy);

            int dpsell = max(dp2buy + prices[i], dp1sell);

            dp2buy = dp1buy;

            dp1sell = dpsell;

            dp1buy = dpbuy;
        }

        return dp1buy;

    }
};
