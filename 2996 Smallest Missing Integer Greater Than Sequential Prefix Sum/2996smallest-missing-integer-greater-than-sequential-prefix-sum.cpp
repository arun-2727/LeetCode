class Solution {
public:
    int missingInteger(vector<int>& nums) {
        long long sum=nums[0];
        if(nums.size()==1)return sum+1;
        int i=1,j;
        while(i<nums.size() && nums[i]==nums[i-1]+1)
        {
            sum+=nums[i];
            i++;
        }
        unordered_set<int> s(nums.begin(),nums.end());
        while(s.count(sum))
        {
            sum++;
        }
        return sum;
    }
};