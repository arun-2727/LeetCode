class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int c=0;
        int res=0;
        for(int i=0;i<requests.size();i++)
            {
                res+=abs(c-requests[i]);
                c=requests[i];
            }
        return res;
    }
};