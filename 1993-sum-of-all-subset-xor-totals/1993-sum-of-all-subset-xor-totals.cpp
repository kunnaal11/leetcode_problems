class Solution {
public:
    int xorsum(vector<vector<int>>& All_sub){         //fun to calculate All xors
        int ans=0;
        for(auto row:All_sub){
            int curr=0;
            for(auto it:row){
                curr^=it;
            }
            ans+=curr;
        }
        return ans;
    } 

    void solve(vector<int>& nums,vector<vector<int>>& All_sub,int i,vector<int>& output){
        if(i>=nums.size()){                           //recurtion fun for all subset
            All_sub.push_back(output);
            return ;
        }
        //exclude
        solve(nums,All_sub,i+1,output);

        //include
        output.push_back(nums[i]);
        solve(nums,All_sub,i+1,output);

    }
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> All_sub;
        vector<int> output;
        int i=0;

        solve(nums,All_sub,i,output);         //get all subset

        int ans=xorsum(All_sub);              //get all xor sum
        return ans;
    }
};