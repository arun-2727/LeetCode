class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            
            st.push(s[i]);
            if(st.top()=='*')
            {
                st.pop();
                st.pop();
            }
            
        }
        if(st.empty())
        {
            return "";
        }
        string res="";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
    return res;
    }
};