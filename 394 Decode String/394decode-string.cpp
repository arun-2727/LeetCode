class Solution {
public:
    string decodeString(string st) {
       stack<int> count;
       stack<string> s;
       string res="";
       int num=0;
       for(char c:st)
       {
        if(isdigit(c))
        {
           num=num*10 + (c-'0');
            
        }
       else if(c=='[')
        {   count.push(num);
            s.push(res);
            num=0;
            res="";
        }
       
       else if(c==']')
        {
          string temp=res;
          res=s.top();
          s.pop();
          int repeat=count.top();
          count.pop();
          while(repeat--)res+=temp;
            
        }
        else res+=c;
       }
       return res;
    }
};