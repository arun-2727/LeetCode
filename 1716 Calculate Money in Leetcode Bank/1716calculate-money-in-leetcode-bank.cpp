class Solution {
public:
    int totalMoney(int n) {
        int money=0,weekno=1;
      

        while(n>0)
        {
           for(int i=0;i<7 && n>0 ;i++)
           {
            money+=weekno + i;
            n--;
           }
           weekno++;
            
           
        }
        return money;
    }
};