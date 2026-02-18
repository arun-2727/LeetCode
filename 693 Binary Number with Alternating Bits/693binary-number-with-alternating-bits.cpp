class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n%2==0)
        {   
            int res=0;
            for(int i=0;i<32;i++)
            {
                if(i%2==0)
                {
                    res=res|(0<<i);
                    if(res==n)return true;
                }
                else
                {
                    res=res|(1<<i);
                    if(res==n)return true;
                }
            }
        }
        else
        {
            int res=0;
            for(int i=0;i<32;i++)
            {
                if(i%2==0)
                {
                    res=res|(1<<i);
                    if(res==n)return true;
                }
                else
                {
                    res=res|(0<<i);
                    if(res==n)return true;
                }
            }
        }
        return false;
    }
};