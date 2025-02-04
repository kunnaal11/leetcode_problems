class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxsum=0;
        int sum=nums[0],n=nums.size();
        if(n==1) return nums[0];

        for(int i=1;i<n;i++){
           
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
           }
            else{
                maxsum=max(maxsum,sum);
                sum=nums[i];
            }
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};