class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.size();
        string s1=s;
        vector<string> ans;
        bool flag = false;
        if( n%k !=0){
            int rem = (k - (n % k)) % k;
             while(rem>0){
                s1+=fill;
                rem--;
           }
           flag=true;       //used modified string
        }
        
        cout<<s1;
        int n1=s1.size();     //new side
        for(int i=0 ; i<(flag?n1:n) ; i+=k){
             string s2="" ;

            for(int j=i;j<i+k;j++){
                 s2+=s1[j];
            }
            ans.push_back(s2);
        }
      return ans;
    }
};