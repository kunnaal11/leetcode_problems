class Solution {
public:
    vector<vector<int>> Solve(vector<vector<int>>& Cord){     //func for marge interval 
        sort(Cord.begin(),Cord.end());

        vector<vector<int>> ans;

        ans.push_back(Cord[0]);                    //adding 1 pair to check further cond;

        for(auto it:Cord){
            if(it[0]<ans.back()[1]){
                ans.back()[0]=min(ans.back()[0],it[0]);
                ans.back()[1]=max(ans.back()[1],it[1]);
            }
            else{
                ans.push_back(it);
            }
        }
        return ans;
    }
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        //x-axis
        vector<vector<int>> Xcord;
        //yaxis
        vector<vector<int>> Ycord;

        for(auto it:rectangles){
            int x1=it[0];
            int y1=it[1];
            int x2=it[2];
            int y2=it[3];

            Xcord.push_back({x1,x2});
            Ycord.push_back({y1,y2});
        }

        //for x-axis
        vector<vector<int>> ans1=Solve(Xcord);
        //for y-axis
        vector<vector<int>> ans2=Solve(Ycord);
        
        if(ans1.size()>=3 || ans2.size()>=3){
            return true;
        }
        else{
           return false;
        }
    }
};