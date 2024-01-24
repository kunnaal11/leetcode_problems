class Solution {
public:
    int reverse(int x) {
         long revno=0;
        while(x!=0){
            int ld=x%10;
            revno=(revno*10)+ld;
            x=x/10;
        }
        if(revno>INT_MAX || revno<INT_MIN) return 0; 
        return int(revno);
        
    }
};