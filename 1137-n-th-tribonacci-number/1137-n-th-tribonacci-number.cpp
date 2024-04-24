class Solution {
         // m[1]
public:
    int tribonacci(int n) {
        if(n==0)           
            return 0;
        if(n==1 || n==2)
            return 1;
      
        vector<int> kk(n+1);  //will calcuate value andd store in vector and its index value
        kk[0]=0;
        kk[1]=1;
        kk[2]=1;
        
        for(int i=3;i<=n;i++){
            kk[i]=kk[i-1]+kk[i-2]+kk[i-3];
        }
        
        return kk[n];
        
        
    }   
};
    
    
   // m[2]
/*
public:
    int tribonacci(int n) {
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        
        // main solution form 3 to n
        int a=0,b=1,c=1;
        int nextele=0;
        
        for(int i=3;i<=n;i++){
            nextele=a+b+c;
            a=b;
            b=c;
            c=nextele;
        }
        
        return nextele;
    }
};

*/