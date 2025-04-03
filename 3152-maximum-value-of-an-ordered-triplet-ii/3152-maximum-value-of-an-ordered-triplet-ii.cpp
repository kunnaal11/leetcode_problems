class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
        long long maxEle=0,maxDiff=0,maxValue=0;

        for(int k=0;k<nums.size();k++){

            maxValue = max(maxValue,maxDiff*nums[k]);     //ans = maxDiff*nums[i];

            maxDiff = max(maxDiff,maxEle-nums[k]);      //will get maxDiffrence
  
            maxEle = max(maxEle,(long long)nums[k]);               //will get maxEle

          
        }
        return maxValue;
    }
};
// we had to do this (nums[i] - nums[j])-->Diff=Maximum so this maxDiff*nums[k]--> will be maximum ans