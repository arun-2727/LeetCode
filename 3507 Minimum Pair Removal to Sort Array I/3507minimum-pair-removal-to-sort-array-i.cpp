class Solution {
     bool is_sorted(vector<int>& a)
        {
            for(int i=0;i<a.size()-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    return false;
                }
            }
            return true;
        }
public:
    int minimumPairRemoval(vector<int>& nums) {
        int c=0,j=0;
       while(!is_sorted(nums))
       {
            
                int minsum=INT_MAX;
                int i=0;
                for( j=0;j<nums.size()-1;j++)
                {
                   int sum=nums[j]+nums[j+1];
                    if(sum<minsum)
                    {
                        minsum=sum;
                        i=j;
                    }
                }
                nums[i]=minsum;
                nums.erase(nums.begin()+i+1);
                c++;
            
       }
       return c;
    }
};