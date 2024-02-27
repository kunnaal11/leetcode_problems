class Solution {
public:
       void solve(vector<int> nums,int i,vector<vector<int>>& ans){
           //base case 
           if(i>=nums.size()){
              ans.push_back(nums);
               return ;
           }
           
           for(int j=i;j<nums.size();j++){
               
               swap(nums[i],nums[j]); //swap the values
               
               solve(nums,i+1,ans);  //recursive call
               
               swap(nums[i],nums[j]);  //backtracking
               
           }
                   
       }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        solve(nums,i,ans);
        return ans;
        
        
    }
};