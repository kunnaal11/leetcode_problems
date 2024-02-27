class Solution {
public:
       void solve(string str,int i,vector<string>& ans, string output,string mapp[]){
           //base case
           if(i>=str.size()){
               ans.push_back(output);
               return ;
           }
           int num=str[i]-'0';  //get number which is is str i.e. "23" so got this no 2
           string value=mapp[num]; //get vaules at that index;
           
           for(int j=0;j<value.size();j++){ //split values for each;
               output.push_back(value[j]);
               solve(str,i+1,ans,output,mapp);  //recall
                output.pop_back();         //backtracking
               
           }
       }
public:
    vector<string> letterCombinations(string str) {
         vector<string> ans;
        string output;
        int i=0;
        if(str.size()==0) return {};
    string mapp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};  
        //will store this in string and get its value by index ;
        solve(str,i,ans,output,mapp);
        return ans;
    }
};