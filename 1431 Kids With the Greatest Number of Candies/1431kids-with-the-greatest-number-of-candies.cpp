class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> res(n);
        int maxc=0;
        for(int i=0;i<n;i++)
        {
            maxc=max(maxc,candies[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies >= maxc)
            {
                res[i]=true;
            }
            else res[i]=false;
        }
        return res;
    }
};