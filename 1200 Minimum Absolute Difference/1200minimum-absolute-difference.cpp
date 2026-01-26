class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mindiff=INT_MAX;
        vector<vector<int>> res;
        for(int i=0;i<arr.size()-1;i++)
        {
            mindiff=min(mindiff,arr[i+1]-arr[i]);
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            int diff=arr[i+1]-arr[i];
            if(diff==mindiff)
            {
                res.push_back({arr[i],arr[i+1]});
            }
        }
        return res;
    }
};