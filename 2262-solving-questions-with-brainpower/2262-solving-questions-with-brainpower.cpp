class Solution {
public:
    int n;
    long long solve(int i,vector<vector<int>>& nums, vector<long long>& t){
        if(i>=n){
            return 0;
        }

        if(t[i]!=-1){
            return t[i];
        }

        long long taken=nums[i][0]+solve(i+nums[i][1]+1,nums,t);
        long long not_taken=solve(i+1,nums,t);

        return t[i]= max(taken,not_taken);

    }
    long long mostPoints(vector<vector<int>>& nums) {
         n=nums.size();

        vector<long long> t(n+1,-1);                 //memo
        int i=0;

        return solve(i,nums,t);
    }
};