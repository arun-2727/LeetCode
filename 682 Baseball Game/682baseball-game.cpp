class Solution {
public:
    int calPoints(vector<string>& nums) {
        
        stack<int> st;

        for(string op: nums)
        {
            if(op=="C")
            {
                st.pop();
            }
            else if(op=="D")
            {
                st.push(st.top()*2);
            }
            else if(op=="+")
            {
                int a= st.top();
                st.pop();
                int b= st.top();
                st.push(a);
                st.push(a+b);
            }
            else{
                st.push(stoi(op));
            }
        }
        int sum=0;
        while(!st.empty())
        {
            sum= sum+st.top();
            st.pop();
        }
        return sum;

    }
};