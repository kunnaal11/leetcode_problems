class Solution {
public:
       void solve(string str,int i,vector<string>& ans, string output,string mapp[]){
           //base case
           if(i>=str.size()){
               ans.push_back(output);
               return ;
           }
           int num=str[i]-'0';
           string value=mapp[num];
           
           for(int j=0;j<value.size();j++){
               output.push_back(value[j]);
               solve(str,i+1,ans,output,mapp);
                output.pop_back();
               
           }
       }
public:
    vector<string> letterCombinations(string str) {
         vector<string> ans;
        string output;
        int i=0;
        if(str.size()==0) return {};
    string mapp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(str,i,ans,output,mapp);
        return ans;
    }
};