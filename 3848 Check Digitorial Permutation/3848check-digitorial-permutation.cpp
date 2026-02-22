class Solution {
public:
    bool isDigitorialPermutation(int n) {
        string s=to_string(n);
        vector<int>fact(10,1);
        for(int i=1;i<=9;i++)
            {
                fact[i]=fact[i-1]*i;
            }
        int sum=0;
        for(char c:s)
            {
                sum+=fact[c-'0'];
            }
        string b=to_string(sum);
        if(s.size()!=b.size())return false;
        vector<int>mapp(10,0),hash(10,0);
        for(char c:s)mapp[c-'0']++;
        for(char c:b)hash[c-'0']++;
        return mapp==hash;
    }
};