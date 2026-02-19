class Solution {
public:
    string smallestNumber(string pattern) {
        string res="";
        stack<int>st;
        for(int i=0;i<=pattern.size();i++)
        {
            st.push(i+1);
            if(pattern[i]=='I' || i==pattern.size())
            {
                while(!st.empty())
                {
                    res+=to_string(st.top());
                    st.pop();
                }
            }
        }
        return res;
    }
};