class Solution {
public:
    int finalElement(vector<int>& nums) {
        int f=nums.front();
        int last=nums.back();
        return max(f,last);
    }
};