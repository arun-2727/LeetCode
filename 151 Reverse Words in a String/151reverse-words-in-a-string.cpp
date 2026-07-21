class Solution {
public:
    string reverseWords(string s) {
        string res;
        int end=-1;
        int j=s.size()-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ' && end==-1)
            {
                end=i;
            }
            if((s[i]==' ' || i==0) && end!=-1)
            {   
                string temp="";
                if(i==0 && s[i]!=' ')
                {
                    temp=s.substr(i,end-i+1);
                }
                else 
                {
                    temp=s.substr(i+1,end-i);
                }
                if(!res.empty())
                {
                    res+=" ";
                }
                res+=temp;
                end=-1;
            }
        }
        return res;
    }
};