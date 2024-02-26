class Solution {
private:
    void solve(vector<int>& nums,int i, vector<int>output, vector<vector<int>>&ans){
        //base
        if(i>=nums.size()){ //this conditon say that inn last i comes at end i=n so this will be base case;
            ans.push_back(output);
            return ;
        }
        //excludde
        solve(nums,i+1,output,ans);
        
        //incude
        output.push_back(nums[i]);
        solve(nums,i+1,output,ans);
        
    }
public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
        vector<int>output;
        int i=0;
        solve(nums,i,output,ans);
        return ans;
    }
};