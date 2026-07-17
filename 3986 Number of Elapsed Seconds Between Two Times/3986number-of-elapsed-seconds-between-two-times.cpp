class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        long long res=0;
        int h=abs(stoi(endTime.substr(0,2))-stoi(startTime.substr(0,2)));
        int m=(stoi(endTime.substr(3,2))-stoi(startTime.substr(3,2)));
        int s=(stoi(endTime.substr(6,2))-stoi(startTime.substr(6,2)));
        res=h*1LL*60*60+m*1LL*60+s;
        return res;
    }
};