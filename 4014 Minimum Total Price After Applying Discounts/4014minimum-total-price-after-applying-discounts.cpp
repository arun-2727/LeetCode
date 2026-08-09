class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double res=0;
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        int j=0;
        for(int i=0;i<prices.size();i++)
            {
                
                if(j<discounts.size())
                {
                    res+=(prices[i]*(100.0-discounts[j]))/100.0;
                    j++;
                }
                else
                {
                    res+=prices[i];
                }
            }
        return res;
    }
};