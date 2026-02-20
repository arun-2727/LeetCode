class Solution {
 public:
  int jump(vector<int>& nums) {
    int cnt=0;
    int far=0;
    int end=0;
    for(int i=0;i<nums.size()-1;i++)
    {
        far=max(far,i+nums[i]);
        if(far>=nums.size()-1)
        {
            cnt++;
            break;
        }
        if(i==end)
        {
            end=far;
            cnt++;
        }
    }
    return cnt;
  }
};