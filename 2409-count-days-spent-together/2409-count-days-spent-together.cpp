class Solution {
    int convert(string s,vector<int>&days)
    {
        int month=stoi(s.substr(0,2));
        int day=stoi(s.substr(3,2));
        for(int i=0;i<month-1;i++)
        {
            day+=days[i];
        }
        return day;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};
       int a1=convert(arriveAlice,days);
        int a2=convert(leaveAlice,days);
        int b1=convert(arriveBob,days);
        int b2=convert(leaveBob,days);

        int start=max(a1,b1);
        int end=min(a2,b2);
        return max(0,end-start+1);
    }
};