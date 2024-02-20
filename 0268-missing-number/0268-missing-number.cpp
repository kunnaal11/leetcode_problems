class Solution {
public:
    int missingNumber(vector<int>& nums) {
 /*      int n=nums.size();
        int t=(n*(n+1))/2;
      for(int i=0;i<n;i++){
            t-=nums[i];
        }
        return (t);  */
         int n=nums.size();
         int t=0;
         for(int i=0;i<n;i++){
            t=t^nums[i]^(i+1);
        }
        return t;
        
    }
};