class Solution {
public:
    bool isPalindrome(int n) {
        int a=n;
        long long revno=0;
        while(n>0){
            int ld=n%10;
            revno=(revno*10)+ld;
            n=n/10;
        }
        if (a == revno) {

        return true;

    } else {

        return false;

    }
        
    }
};