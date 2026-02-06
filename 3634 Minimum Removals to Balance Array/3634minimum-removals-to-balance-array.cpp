class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0;
        int maxlen=0;
        for(int i=0;i<nums.size();i++)
        {
            while((long long)nums[i]>(long long)nums[left]*k)
            {
                left++;
            }
            maxlen=max(maxlen,i-left+1);
        }
        return nums.size()-maxlen;
    }
};