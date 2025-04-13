class Solution {
   
public:
    const int M=1e9 + 7;
    int findPow(long long a,long long b){
        if(b==0){                                       //#taking Pow using binary expantion!!
            return 1;
        }

        long long half = findPow(a,b/2);         
        long long ans = (half*half) % M;              //for even

        if(b&1){                                    //for odd
            ans=(ans*a) % M;
        }
        return ans;
    }
public:
    int countGoodNumbers(long long n) {
        long long e=(n+1)/2;             //Total even pos
        long long o=n/2;                 //Total odd pos
        
        long long Evenpos=findPow(5,e);
        long long oddpos=findPow(4,o);

        return (Evenpos*oddpos) % M;
    }
};