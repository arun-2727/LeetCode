class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int sign=1;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {int dig=s[i]-'0';
            sum+=sign*dig;
            sign=-sign;
        }
        return sum;
    }
};