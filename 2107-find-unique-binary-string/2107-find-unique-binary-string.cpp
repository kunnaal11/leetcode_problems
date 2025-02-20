class Solution {
public:
     bool solve(int n,vector<string>& nums, unordered_set<string>&st,  string& ans,string& curr){
       
        if(curr.size()==n){
            if(st.find(curr)==st.end()){      //if its not preset
                ans=curr;
                return true;
            }
            else return false;
        }
        curr+='0';                                               //try
        if(solve(n,nums,st,ans,curr)==true) return true;             //explore
        curr.pop_back();                                         //backtrack

         curr+='1';                                               //try
        if(solve(n,nums,st,ans,curr)==true) return true;             //explore
        curr.pop_back();                                         //backtrack
         
         return false;
    
     }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        unordered_set<string> st(nums.begin(),nums.end());
      /*  for(auto it:nums){
             st.insert(it);            //no need to used this method use this instead: st(nums.begin(),nums.end());
        }    */
         string curr="";
        string ans="";
        solve(n,nums,st,ans,curr);
        return ans;
    }
};