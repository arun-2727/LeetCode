class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(k>nums.size())return -1;
        int n=nums.size();
        double curr_sum=0;
        for(int i=0;i<k;i++)
        {
            curr_sum+=nums[i];
        }
        double avg_sum=(curr_sum/k);
        double maxAvg=avg_sum;
        for(int j=k;j<n;j++)
        {
            curr_sum+=nums[j]-nums[j-k];
            avg_sum=curr_sum/k;
            maxAvg=max(maxAvg,avg_sum);
        }
        return maxAvg;
    }
};