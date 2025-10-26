class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      unordered_map<int,int> mapp;
      int left=0;
      int maxlen=0;
      for(int right=0;right<fruits.size();right++)
      {
        mapp[fruits[right]]++;
        while(mapp.size()>2)
        {
            mapp[fruits[left]]--;
            if(mapp[fruits[left]]==0)
            {
                mapp.erase(fruits[left]);

            }
            left++;
           
        } 
        maxlen=max(maxlen,right-left+1);
      }
      return maxlen;
    }
};