class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for(auto &i: tokens) {
            if(i == "+" || i == "-" || i == "*" || i == "/") {
                int n2 = s.top();
                s.pop();
                int n1 = s.top();
                s.pop();

                s.push(i == "+" ? (n1 + n2) : (i == "-" ? (n1 - n2) : (i == "*" ? (n1 * n2) : (n1 / n2))));
            }

            else    s.push(stoi(i));
        }
        return s.top();
    }
};