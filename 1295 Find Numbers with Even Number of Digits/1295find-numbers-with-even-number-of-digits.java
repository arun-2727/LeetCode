class Solution {
    public int findNumbers(int[] nums) {
        int count=0;
        for(int num:nums){
            int k=1;
            while((num/10)!=0){
                k+=1;
                num=num/10;

            }
            if(k%2==0){
                count+=1;
            }
        }
        return count;
    }
}