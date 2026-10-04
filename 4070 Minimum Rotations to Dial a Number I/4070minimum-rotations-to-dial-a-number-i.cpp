class Solution {
public:
    int minRotations(string s) {
        int cnt=0;
        int curr=0;
        for(int i=0;i<s.size();i++)
        {
            int x=s[i]-'0';
            int diff=abs(x-curr);
            cnt+=min(diff,10-diff);
            curr=x;
        }
        return cnt;
        
    }
};