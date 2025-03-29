class Solution {
public:
    int countSegments(string s) {
        
        int cnt=0;
        bool flag=false;
        
        for(int i=0;i<s.size();i++){
           if(s[i]!=' '){
            flag=true;
           }
           else{
             if(flag){
                cnt++;
                flag=false;
             }
           }
        }
        if(flag){
            cnt+=1;
        }
        return cnt;
    }
};