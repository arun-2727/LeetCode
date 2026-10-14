class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
        string ans;
        while(num>0)
        {
            int curr=min(9,sum);
            ans+=char('0'+curr);
            sum-=curr;
            num--;
        }
        if(sum==0)
        {
            return ans;
        }
        return "";
    }
};