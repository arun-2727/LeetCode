class Solution {
public:
    int residuePrefixes(string s) {
        vector<int> freq(26,0);
        int d=0;
        int res=0;
        for(int i=0;i<s.size();i++)
            {
                int j=s[i]-'a';
                if(freq[j]==0)
                {
                    d++;
                }
                freq[j]++;
                int len=i+1;
                if(d==len%3)
                {
                    res++;
                }
            }
        return res;
    }
};