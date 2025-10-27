class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int minlen,maxlen;
       minlen=(word1.size()<=word2.size())?word1.size():word2.size();
       maxlen=(word1.size()>=word2.size())?word1.size():word2.size();
;        string res="";
        for(int i=0;i<minlen;i++)
        {
            res+= word1[i];
            res+= word2[i];
        }
        if(word2.size()>word1.size())
        {
             for(int i=minlen;i<maxlen;i++)
        {
            res+=word2[i];
        }
        }
        else
        {
            for(int i=minlen;i<maxlen;i++)
            {
                res+=word1[i];
            }
        }
       return res;
    }
};