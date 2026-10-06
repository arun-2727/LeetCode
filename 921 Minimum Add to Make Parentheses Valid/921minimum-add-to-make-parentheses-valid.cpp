class Solution {
public:
    int minAddToMakeValid(string s) {
        if(s.empty())return 0;
        stack<char>st;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                cnt++;
            }
            else
            {
                if(st.empty())
                {
                    cnt++;
                }
                else if(st.top()=='(')
                {
                    st.pop();
                    cnt--;
                }
                else{
                    cnt++;
                    
                }
            }
        }
        return cnt;
    }
};