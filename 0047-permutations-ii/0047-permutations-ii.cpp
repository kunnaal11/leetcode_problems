class Solution {
public:
       void solve(vector<int> nums,int i, vector<vector<int>>&ans){
           if(i>=nums.size()){
               ans.push_back(nums);
               return ;
           }
           
           for(int j=i;j<nums.size();j++){
               if((nums[i]==nums[j]) && j!=i){ 
                     continue; //ignore this cases of same no and
               }
               else{
                    swap(nums[i],nums[j]); 
                    solve(nums,i+1,ans);
                   //no need of backtracking we will swap original array
                  
               }
              
               
           }
       }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>> ans;
        int i=0;
       sort(nums.begin(),nums.end()); 
        solve(nums,i,ans);
        return ans;
    }
};