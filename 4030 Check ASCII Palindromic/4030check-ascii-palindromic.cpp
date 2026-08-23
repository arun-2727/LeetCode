class Solution {
public:
    bool isPalindromic(string s) {
        string temp="";
        for(int i=0;i<s.size();i++)
            {
                for(int j=7;j>=0;j--)
                    {
                        temp+=((s[i]>>j)&1)+'0';
                    }
            }
        string res=temp;
        reverse(res.begin(),res.end());
        return res==temp;
    }
};