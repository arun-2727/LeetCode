class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int res=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=k)
            {
                k+=1;
            }
        }
        return k;
    }
};