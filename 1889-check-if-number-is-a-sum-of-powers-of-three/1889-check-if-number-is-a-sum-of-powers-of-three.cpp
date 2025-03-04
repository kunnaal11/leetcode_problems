class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){
            if(n%3==2){
                return false;
            }
            n/=3;
        }
        return true;
    }
};
//so here the sum should contain distinct power like 3^2 cant come 2 times in sum so
// ,we will only check if any 3^x comes twice the its false