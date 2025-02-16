class Solution {
public: 
    bool check(int sq, int Csum, int target) {
 
        if(sq==0){                                       //base conditition
            return (Csum==target)?true:false;
        }
       
        return ( check(sq/10,Csum+sq%10,target) ||
                 check(sq/100,Csum+sq%100,target) ||
                 check(sq/1000,Csum+sq%1000,target) ||
                 check(sq/10000,Csum+sq%10000,target) );   //this case of last test case n=1000 extra one
    }
public:
    int punishmentNumber(int n) {
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int sq=i*i;
            if (check(sq,0,i)) {
                ans += (i * i);
            }
        }
        return ans;
    }
};