class Solution {
public:
    string maximumXor(string s, string t) {
        int o=0;
        int z=0;
        for(char c:t)
            {
                if(c=='1')o++;
                else z++;
            }
        string res="";
        for(char c:s)
            {
                if(c=='0')
                {
                    if(o>0)
                    {
                        res+='1';
                            o--;
                    }
                    else
                    {
                        res+='0';
                        o--;
                    }
                }
                else
                {
                    if(z>0)
                    {
                        res+='1';
                        z--;
                    }
                    else
                    {
                        res+='0';
                        o--;
                    }
                }
            }
        return res;
    }
};