class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        int tw=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==10)
            {
                if(!five)return false;
                five--;
                ten++;
            }
            else if(bills[i]==20)
            {
                if(ten && five)
                {
                    five--;
                    ten--;
                }
                else if(five>=3)
                {
                    five-=3;
                }
                else return false;
                tw++;
            }
            else{
                five++;
            }
        }
        return true;
    }
};