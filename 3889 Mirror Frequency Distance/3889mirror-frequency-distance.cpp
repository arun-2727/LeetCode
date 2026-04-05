class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char,int>mapp;
        for(char c:s)
            {
                mapp[c]++;
            }
        unordered_set<char>v;
        int res=0;
        for(auto &p:mapp)
            {
                char c=p.first;
                if(v.count(c))continue;
                char m;
                
                if(isalpha(c))
                {
                    m='z'-((c-'a'));
                }
                else 
                {
                    m='9'-(c-'0');
                }
                 int f1=mapp[c];
                 int f2=mapp.count(m)?mapp[m]:0;

                res += abs(f1 - f2);

                v.insert(c);
                v.insert(m);
            }
        return res;
    }
};