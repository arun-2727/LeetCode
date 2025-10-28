class Solution {
public:
    int largestAltitude(vector<int>& gain) {
         int maxc = 0;   
        int curr = 0;   

        for (int g : gain) {
            curr += g;              
            maxc = max(maxc, curr); 
        }

        return maxc;
    }
};