class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        //for left -->rigght moddify unwanted part string
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') 
                cnt++;
            else if(s[i]==')'){
                if(cnt==0)
                    s[i]='#';
                else // cnt not eua to 0
                    cnt--;;
            }
            else   // a -z ele
                continue;
        }
         //for left <-- rigght moddify unwanted part string
         cnt=0;
         for(int i=s.size();i>=0;i--){
            if(s[i]==')') 
                cnt++;
            else if(s[i]=='('){
                if(cnt==0)
                    s[i]='#';
                else // cnt not eua to 0
                    cnt--;;
            }
            else   // a -z ele
                continue;
        }
        
        string ans="";
        for(auto ch:s){ //shotcut of for loop 
            if( ch !='#')
                ans+=ch;
        }
        
        
      return ans;
    }
};
// tc-o(n) sd-O(1)
//approch 2 contain  stack tc and sd O(n)