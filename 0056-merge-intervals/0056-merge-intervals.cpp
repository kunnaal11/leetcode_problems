/*class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& grid) {
        
        sort(begin(grid), end(grid));

        vector<vector<int>> ans;
        for (auto &it : grid) {
            if (ans.empty() || it[0] > ans.back()[1]) {
                ans.push_back(it);                             // then this pair will store
            } else {
                ans.back()[1] = max(ans.back()[1], it[1]);    //it[0] < ans.back()[1] ,updating interval
            }
        }
        return ans;
    }
};*/
/*  or */
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& Cord) {
        sort(Cord.begin(),Cord.end());

        vector<vector<int>> ans;

        ans.push_back(Cord[0]);                    //adding 1 pair to check further cond;

        for(auto it:Cord){
            if(it[0]<=ans.back()[1]){
                ans.back()[0]=min(ans.back()[0],it[0]);
                ans.back()[1]=max(ans.back()[1],it[1]);
            }
            else{
                ans.push_back(it);
            }
        }
        return ans;
        }
    };
