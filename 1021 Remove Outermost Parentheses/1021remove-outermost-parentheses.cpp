class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string>parts;
        int c=0;
        int start=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                c++;
            }
            else
            {
                c--;
                if(c==0)
                {
                    parts.push_back(s.substr(start,i-start+1));
                    start=i+1;
                }
            }

        }
        string res="";
        for(int i=0;i<parts.size();i++)
        {
            res+=parts[i].substr(1,parts[i].size()-2);
        }
        return res;
    }
};