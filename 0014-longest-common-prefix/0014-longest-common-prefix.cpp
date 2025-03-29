class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size(); 
        
        sort(begin(strs),end(strs));

        string first=strs[0], second=strs[n-1];         //we had to find common in all so will check for 1st& last only
          
        for(char i=0;i<min(first.size(),second.size());i++){
            if(first[i]!=second[i]){
                break;
            }
            ans+=first[i];
        }
        return ans;
    }
};