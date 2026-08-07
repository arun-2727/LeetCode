class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1)return s;
        int res=-1;
        int idx1=0,idx2=0;
        for(int i=0;i<s.size();i++)
        {
           int  p1=i;
           int  p2=i;
            while((p1>=0 && p2<s.size())&& s[p1]==s[p2])
            {
                p1--;
                p2++;
            }
            if(p2-p1-1>res)
            {
                res=p2-p1-1;
                idx1=p1+1;
                idx2=p2-1;
            }
        }
        int idx3=0;
        int idx4=0;
        for(int i=0;i<s.size();i++)
        {
           int q1=i;
           int q2=i+1;
            while((q1>=0 && q2<s.size()) && s[q1]==s[q2])
            {
                q1--;
                q2++;
            }
           if(q2-q1-1>res)
           {
            res=q2-q1-1;
            idx3=q1+1;
            idx4=q2-1;
           }
        }
        if(res==idx4-idx3+1)return s.substr(idx3,idx4-idx3+1);
        else return s.substr(idx1,idx2-idx1+1);
    }
};