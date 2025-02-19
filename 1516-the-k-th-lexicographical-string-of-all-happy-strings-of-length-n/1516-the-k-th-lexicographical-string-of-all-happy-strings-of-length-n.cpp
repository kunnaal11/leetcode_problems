class Solution {
public:
    void solve(int n,int k,string& curr,vector<string>& ans){
        if(curr.size()==n){
            ans.push_back(curr);
            return;
        }

        for(char ch='a'; ch<='c';ch++){
            if(!curr.empty() && curr.back()==ch){
                continue;
            }
            curr+=ch;                       //do

            solve(n,k,curr,ans);           //explore

            curr.pop_back();               //undo
        }
    }
public:
    string getHappyString(int n, int k) {
        string curr="";
        vector<string> ans;

        solve(n,k,curr,ans);
        if(ans.size()<k){
            return "";
        }
        return ans[k-1];
    }
};