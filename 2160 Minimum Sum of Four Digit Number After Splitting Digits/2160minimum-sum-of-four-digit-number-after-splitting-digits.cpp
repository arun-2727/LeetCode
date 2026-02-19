class Solution {
public:
    int minimumSum(int num) {
        vector<int>dig(4);
        for(int i=0;i<4;i++)
        {
            dig[i]=num%10;
            num/=10;
        }
        sort(dig.begin(),dig.end());
        int num1=(10*dig[0])+dig[2];
        int num2=(10*dig[1])+dig[3];
        return num1+num2;
    }
};