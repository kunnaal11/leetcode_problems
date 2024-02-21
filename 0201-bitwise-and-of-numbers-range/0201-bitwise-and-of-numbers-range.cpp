class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
       int cnt=0;
        while(l!=r){
            l=l>>1;
            r=r>>1;
            cnt++;
        }
        return l<<cnt;
    }
};
/*  5=0101 ,7=0111 so check until both are same  in last you will get 01 by shifting right by 1;
 but your ans is 0100 and you got 01 so mmake cnt and shift it by cnt i.e. l<<cnt or r<<cnt;   */