class Solution {
public:
    int myAtoi(string s) {
       int i=0;
       int n=s.size();

       while(i<n && s[i]==' '){           //ignore ' '
         i++;
       }
       
       bool neg=false;                           //now we reach at main part,check sign
       if(i<n && s[i]=='-'){
             neg=true;
             i++;
       }
       else if(i<n && s[i]=='+'){
            i++;
       }
       
       long long result=0;
       while(i<n && isdigit(s[i])){
             result=result*10 +(s[i]-'0');
                
             if(result>INT_MAX){                           // Handle overflow
                return neg?INT_MIN:INT_MAX;
            }
             i++;
       }

       if(neg){
          return result*(-1);
       }

       
        return result;
    }
};