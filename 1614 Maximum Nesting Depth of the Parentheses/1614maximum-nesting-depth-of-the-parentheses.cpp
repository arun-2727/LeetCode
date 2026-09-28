class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int maxx=0;
        for(char c:s)
        {
            if(c=='(')
            {
                cnt++;
                maxx=max(maxx,cnt);
            }
            else if(c==')')
            {
                cnt--;
            }
        }
        return maxx;
    }
};