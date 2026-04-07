class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt==0)
            {   
                cnt=1;
                ele=nums[i];
            }
            else if(nums[i]==ele)
            {
                cnt++;
            }
            else cnt--;
            // int c=0;
            // for(int i=0;i<nums.size();i++)
            // {
            //     if(nums[i]==ele)c++;
            // }
            // if(c>floor(nums.size()/2))return ele;
            
        }
        return ele;
    }
};