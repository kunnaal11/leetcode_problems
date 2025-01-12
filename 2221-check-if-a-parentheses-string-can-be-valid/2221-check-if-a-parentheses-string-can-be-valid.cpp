class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size();
        if(n&1) return false;       // Odd length cannot form valid parentheses

        int balance=0; 
       // Left-to-right pass: Ensure there '(' >= ')'
        for(int i=0;i<n;i++){
            if(s[i]=='(' || locked[i]=='0'){
                balance++;
            }
            else{     // s[i] == ')' and locked[i] == '1'
                balance--;
            }

            if(balance<0) return false;    // Too many ')' encountered
        }

        balance=0;
        // Right-to-left pass: Ensure there arr ')' >= '('
        for(int i=n-1;i>=0;i--){
            if(s[i]==')' || locked[i]=='0'){
                balance++;
            }
            else{      // s[i] == '(' and locked[i] == '1'
                balance--;
            }

            if(balance<0) return false;     // Too many '(' encountered
        }
        return true;
    }
};