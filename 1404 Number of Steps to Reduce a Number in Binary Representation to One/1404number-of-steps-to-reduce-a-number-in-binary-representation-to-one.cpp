class Solution {
public:
    int numSteps(string s) {
        int cnt=0;
        string res="1";
        while(s.size()>1)
        {
            if(s[s.size()-1]=='0')
            {
                s.pop_back();
            }
            else
            {
                int n=s.size()-1;
                while(n>=0 && s[n]!='0')
                {
                    s[n]='0';
                    n--;
                }
                if(n<0)
                {
                    s='1'+s;

                }
                else
                {
                    s[n]='1';
                }
            }
            cnt++;
        }
        return cnt;
    }
};