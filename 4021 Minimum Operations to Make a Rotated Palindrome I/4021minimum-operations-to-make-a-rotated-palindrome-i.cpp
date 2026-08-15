class Solution {
public:
    int minOperations(string s) {
        int res=INT_MAX;
        for(int i=0;i<s.size();i++)
            {
                
                int c=i;
                for(int j=0;j<s.size()/2;j++)
                    {
                        int a=s[(j+i)%s.size()]-'a';
                        int b=s[(s.size()-j-1+i)%s.size()]-'a';
                        int diff=abs(a-b);
                        c+=min(diff,26-diff);
                    }
                res=min(res,c);
            }
        return res;
    }
};