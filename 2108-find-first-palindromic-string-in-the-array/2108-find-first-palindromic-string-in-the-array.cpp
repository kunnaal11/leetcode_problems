class Solution {
private: 
        bool check(string s){
             int m=s.size();
           for(int i=0;i<m;i++){
               if(s[i]!=s[m-i-1]) {
               return false;
               }
            }
           return true;    // out side of this for--loop anything is there then it is palindro
        }
           
        
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
   
        for(int i=0;i<n;i++){
            if(check(words[i])) {
                return words[i];
            }
         }
          return "";       //after  out sidde of for loop if its not then empty strring
     }
};