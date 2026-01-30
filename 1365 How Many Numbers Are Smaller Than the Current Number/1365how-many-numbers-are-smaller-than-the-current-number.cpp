class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>freq(101,0);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=1;i<=100;i++)
        {
            freq[i]+=freq[i-1];
        }
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {   
            if(nums[i]==0)res.push_back(0);
            else res.push_back(freq[nums[i]-1]);
        }
        return res;
    }
};