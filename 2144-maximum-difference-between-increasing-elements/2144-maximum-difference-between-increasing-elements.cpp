class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        //vector<int> diff;
        int n=nums.size();
        int maxi=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    int diff=nums[j]-nums[i];
                    maxi=max(maxi,diff);
                }
            }
        }
        return maxi;
    }
};