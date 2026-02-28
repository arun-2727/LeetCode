class Solution {
public:
    string mergeCharacters(string s, int k) {
        string res="";
        while(1)
            { int c=0;
                for(int i=0;i<s.size();i++)
                {
                    for(int j=i+1;j<s.size() && (j-i)<=k;j++)
                        {
                            if(s[i]==s[j] && (j-i)<=k)
                            {
                                s.erase(j,1);
                                c=1;
                                break;
                            }
                        }
                    if(c==1)break;
                }
                if(c==0)break;
                
            }
        
        return s;
    }
};