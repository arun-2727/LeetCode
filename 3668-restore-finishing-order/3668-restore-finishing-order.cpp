class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int>s(friends.begin(),friends.end());
        vector<int>res;
        for(int i=0;i<order.size();i++)
        {
            if(s.count(order[i]))res.push_back(order[i]);
        }
        return res;
    }
};