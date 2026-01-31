class Solution {
public:
    string reverseByType(string s) {
        vector<char>l1,l2;
        for(char c:s)
            {
                if(c>='a' && c<='z')
                {
                    l1.push_back(c);
                }
                else
                {
                    l2.push_back(c);
                }
                
            }
        reverse(l1.begin(),l1.end());
        reverse(l2.begin(),l2.end());
        int j=0,sp=0;
        for(int i=0;i<s.size();i++)
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    s[i]=l1[j++];
                }
                else
                {
                    s[i]=l2[sp++];
                }
            }
        return s;
    }
};