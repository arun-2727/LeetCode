class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        if(prices.size()<=1)return 0;
        int maxp=0;
        int minp=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {   
            minp=min(minp,prices[i]);
            if(prices[i]-minp>fee)
            {
                maxp+=prices[i]-minp-fee;
                minp=prices[i]-fee;
            }
           
        }
        return maxp;
    }
};