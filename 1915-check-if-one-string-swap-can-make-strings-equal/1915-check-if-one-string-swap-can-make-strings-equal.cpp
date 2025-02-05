class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

       int n=s1.size(),m=s2.size();
        if(n!=m) return false;
        int first=-1,second=-1;
        int cnt=0;
            for(int i=0;i<n;i++){
                if(s1[i]!=s2[i]){
                    cnt++;
                    if(first==-1) first=i;
                    else if(second==-1) second=i;
                }
            }
        
        if(cnt==0 || cnt==2 && s1[first]==s2[second] && s1[second]==s2[first]){
            return true;
        }
        return false;
    }
};