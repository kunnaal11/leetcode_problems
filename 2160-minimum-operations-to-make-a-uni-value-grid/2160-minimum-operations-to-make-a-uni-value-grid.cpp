class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {

        vector<int>ans;           //2D->1D

        for(auto row:grid){
            for(auto it:row){
                ans.push_back(it);
            }
        }

        sort(ans.begin(),ans.end());     //sort for median

        int target=ans[ans.size()/2];   //median

        int cnt=0;

        for(auto it:ans){
            if(target%x != it%x) return -1;       //Maths
            else{
                cnt+=abs(target-it)/x;
            }
        }
        return cnt;
    }
};