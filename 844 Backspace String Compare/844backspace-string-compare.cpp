class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string res1,res2;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(!res1.empty())
                {
                    res1.pop_back();
                }
            }
            else
            {
                res1.push_back(s[i]);
            }
        }
        for(int i=0;i<t.size();i++)
        {
            if( t[i]=='#')
            {
                if(!res2.empty())
                {
                    res2.pop_back();
                }
            }
            
            else
            {
                res2.push_back(t[i]);
            }
        }
        if(res1==res2)return true;
        else return false;
    }
};