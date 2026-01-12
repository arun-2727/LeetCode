class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size())return s;
        vector<vector<char>>res(numRows);
        int d=1;
        int i=0;
        for(char c:s)
        {
            res[i].push_back(c);
            if(i==0)
            {
                d=1;
            }
            else if(i==numRows-1)
            {
                d=-1;
            }
            i=i+d;
        }
        string final="";
        for(int j=0;j<numRows;j++)
        {
            string temp="";
            int k=0;
            for(int k=0;k<res[j].size();k++)
            {
                if(res[j][k])
                {
                    temp+=res[j][k];
                }
               
            }
            final+=temp;
        }
        return final;
    }
};