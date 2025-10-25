class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mul=k;
        for(int i=0;i<n;i++)
            {
                
                
                auto it=find(nums.begin(),nums.end(),mul);
                if(!(it!=nums.end()))
                {
                     return mul;   
                }
                else
                {
                    mul=mul+k;
                }
            }
        return mul;
        
    }
};