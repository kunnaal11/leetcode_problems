class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi=INT_MIN;
        int k=nums.size();
        for(int i=0;i<k;i++){
           int diff= abs(nums[i]-nums[(i+1)%k]);
            maxi = max(maxi,diff);
        }
        return maxi;
    }
};