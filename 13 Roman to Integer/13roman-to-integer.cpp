class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        unordered_map<char,int>mapp;
        mapp['I']=1;
        mapp['V']=5;
        mapp['X']=10;
        mapp['L']=50;
        mapp['C']=100;
        mapp['D']=500;
        mapp['M']=1000;
        for(int i=0;i<s.size();i++)
        {
            if(i==s.size()-1)
            {
                res+=mapp[s[i]];
            }
            else if(mapp[s[i]]<mapp[s[i+1]])
            {
                res+=(mapp[s[i+1]]-mapp[s[i]]);
                i++;
            }
            else
            {
                res+=mapp[s[i]];
            }
        }
        return res;
    }
};