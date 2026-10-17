class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<32;i++)
        {   
            int cnt=0;
            for(int j=0;j<nums.size();j++)
            {
                if((1<<i)&nums[j])cnt++;
            }
            if(cnt%3!=0)
            {
                res=res| (1<<i);
            }
        }
        return res;
    }
};