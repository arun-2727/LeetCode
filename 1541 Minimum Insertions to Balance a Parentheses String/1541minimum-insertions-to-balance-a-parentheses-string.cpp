class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    if(i<s.size()-1 && s[i+1]==')')i++;
                    else cnt++;
                    cnt++;
                }
                else
                {
                    if(i<s.size()-1 && s[i+1]==')')
                    {
                        i++;

                    }
                    else cnt++;
                    st.pop();
                }
            }
        }
        return cnt+st.size()*2;
    }
};