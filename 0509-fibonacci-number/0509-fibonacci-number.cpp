class Solution {
/*public:
    void ff(int n){
        if(n==0) {
            return 0;
        }
        if(n==1 || n==2){ 
            return 1;
        }
        
        return ff(n-1)+ff(n-2);
    }*/
public:
    int fib(int n) {
        
        if(n==0) {
            return 0;
        }
        if(n==1 || n==2){ 
            return 1;
        }
        
        return fib(n-1)+fib(n-2);
        
    }
};