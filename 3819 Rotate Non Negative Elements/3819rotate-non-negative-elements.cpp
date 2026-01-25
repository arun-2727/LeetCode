class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> pos;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=0)pos.push_back(nums[i]);
            }
        int m=pos.size();
        if(m==0)return nums;
         k=k%m;
        rotate(pos.begin(),pos.begin()+k,pos.end());
        int j=0;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=0)
                {
                    nums[i]=pos[j++];
                }
            }
        return nums;
    }
};