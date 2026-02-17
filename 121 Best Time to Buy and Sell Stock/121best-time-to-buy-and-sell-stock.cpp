class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minp=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minp=min(minp,prices[i]);
            int p=prices[i]-minp;
            if(p>maxprofit)
            {
                maxprofit=p;
            }

        }
        return maxprofit;
    }
};