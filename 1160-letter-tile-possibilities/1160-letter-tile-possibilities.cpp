class Solution {      //backtracking
public:
     void solve(string& tiles,string s, unordered_set<string>& st, vector<bool>& used){
        
        st.insert(s);
        
        for(int j=0;j<tiles.size();j++){
            if(used[j]==true){
                continue;
            }
            else{
                used[j]=true;             //try
                s+=tiles[j];

                solve(tiles,s,st,used);   //explore
                
                used[j]=false;           //undo
                s.pop_back(); 
            }
        }
     }
public:
    int numTilePossibilities(string tiles) {
        int n=tiles.size();

        unordered_set<string> st;
        vector<bool> used(n,false);

        string s="";

        solve(tiles,s,st,used);

        return st.size()-1;          // -1 to avoid this empty case " "
    }
};