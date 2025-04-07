class Solution {
public:
    bool solve(vector<int>& nums,int i,int target,int sum2,vector<vector<int>>& t){
        if(sum2==target){
            return true;                              //recurr+memo
        }
        if(sum2>target || i>=nums.size()){
            return false;
        }

        if (t[i][sum2] != -1) return t[i][sum2];

        //exclude
        bool exclude = solve(nums,i+1,target,sum2,t);
        //include
        bool include = solve(nums,i+1,target,sum2+nums[i],t);

        return t[i][sum2] = exclude || include;
    }
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int Tsum=0;
        for(auto it:nums){
            Tsum+=it;
        }
        if(Tsum&1) return false;   //is Tsum is odd

        int target=Tsum/2;
        int sum2=0,i=0;
        vector<vector<int>> t(n, vector<int>(target + 1, -1)); 

        return solve(nums,i,target,sum2,t);
    }
};