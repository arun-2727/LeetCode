class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int start=prices[0];
        for(int i=1;i<prices.size();i++)
        {   
            if(prices[i]>start)
            {
                maxp+=(prices[i]-start);
            }
            start=prices[i];
        }
        return maxp;
    }
};