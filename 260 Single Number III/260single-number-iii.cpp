class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            x^=nums[i];

        }
        int pos;
        for(int i=0;i<32;i++)
        {
            if((1<<i)&x)
            {
                pos=i;
                break;
            }
        }
        int a=0,b=0;
        for(int i=0;i<nums.size();i++)
        {
            if((1<<pos)&nums[i])a^=nums[i];
            else b^=nums[i];
        }
        return {a,b};
    }
};