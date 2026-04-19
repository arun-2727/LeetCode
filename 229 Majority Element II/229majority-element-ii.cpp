class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int e1=INT_MIN,e2=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt1==0 && e2!=nums[i])
            {
                cnt1=1;
                e1=nums[i];
            }
            else if(cnt2==0 && e1!=nums[i])
            {
                cnt2=1;
                e2=nums[i];
            }
            else if(nums[i]==e1)cnt1++;
            else if(nums[i]==e2)cnt2++;
            else 
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==e1)cnt1++;
            if(nums[i]==e2)cnt2++;
        }
        int n=nums.size()/3+1;
        vector<int>res;
        if(cnt1>=n)res.push_back(e1);
        if(cnt2>=n && e1!=e2)res.push_back(e2);
        return res;
    }
};