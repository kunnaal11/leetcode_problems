class Solution {
public:
      int m,n;
     vector<vector<int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};       //universal define to access

     int BFS(int& i,int& j,vector<vector<int>>& grid){           //instead of bfs can use dfs
        queue<pair<int,int>>que;
         que.push({i,j});                                       //Add first pair,which found>0 in queue
         
        int len=grid[i][j];                                   //inilishing len
        grid[i][j]=0;       //once ele check marke it 0
 
        while(!que.empty()){  
            int i = que.front().first;                          //curr ele
            int j = que.front().second;
            que.pop();

           
            for(auto it:dir){
                int i_=it[0]+i;                             //negihbour ele of curr ele
                int j_=it[1]+j;

                if(i_>=0 && j_>=0 && i_< m && j_< n && grid[i_][j_]>0){
                    que.push({i_,j_});                     //if negibour ele>0 found add it in queue
                    len+=grid[i_][j_];
                    grid[i_][j_]=0;                       //once ele check marke it 0
                }
            }
        }
        return len;
     }
    
    int findMaxFish(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();

        int maxlen=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]>0){//water cell found
                    maxlen=max(maxlen,BFS(i,j,grid));
                }
            }
        }
        return maxlen;
    }
};