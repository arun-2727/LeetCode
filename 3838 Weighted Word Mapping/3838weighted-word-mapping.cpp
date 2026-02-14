class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(string s:words)
            {int sum=0;
                for(char c:s)
                    {
                       sum+=weights[c-'a']; 
                    }
             int mod=sum%26;
             char ch='z'-mod;
             res+=ch;
            }
        return res;
    }
    
};