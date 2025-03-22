class Solution {  //DFS+graph
public:
    void dfs(int i, unordered_map<int, vector<int>>& adj,vector<bool>& visited,int& e,int& v){
       visited[i]=true;
       v++;
       e += adj[i].size();

       for(auto it:adj[i]){
          if(!visited[it]){
             dfs(it,adj,visited,e,v);
          }
       }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        
         unordered_map<int, vector<int>> adj;
         int ans=0;

         for(auto it:edges){
            int u=it[0];
            int v=it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
         }
         
         vector<bool> visited(n,false);

         for(int i=0;i<n;i++){
            if(visited[i]){
                continue;
            }
            int e=0;
            int v=0;
            dfs(i,adj,visited,e,v);

            if((v*(v-1)/2)==e/2){
                ans++;
            }
         }

      return ans;
    }
};