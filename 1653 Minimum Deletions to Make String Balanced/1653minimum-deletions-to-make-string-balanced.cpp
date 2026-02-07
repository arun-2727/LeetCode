class Solution {
public:
    int minimumDeletions(string s) {
       int bcount=0;
       int res=0;
       for(char c:s)
       {
            if(c=='b')
            {
                bcount++;
            }
            else
            {
                res=min(res+1,bcount);
            }
       }
       return res;
    }
};