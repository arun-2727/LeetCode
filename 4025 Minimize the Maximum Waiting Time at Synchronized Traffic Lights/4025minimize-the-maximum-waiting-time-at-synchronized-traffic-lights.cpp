class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int green=*max_element(lights.begin(),lights.end());
        int res=0;
        for(int i=0;i<arrivalTime.size();i++)
            {
                int red=arrivalTime[i]%period;
                if(red>=green)
                {
                    res=max(res,period-red);
                }
            }
        return res;
    }
};