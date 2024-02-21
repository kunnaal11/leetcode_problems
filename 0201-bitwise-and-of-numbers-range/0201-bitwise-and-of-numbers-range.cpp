class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count=0;
        while(left!=right){
            left=left>>1;
            right=right>>1;  
            count++;
        }
        return left<<count;
    }
};
    






























/*  5=0101 ,7=0111 so check until both are same  in last you will get 01 by shifting right by 1;
 but your ans is 0100 and you got 01 so mmake cnt and shift it by cnt i.e. l<<cnt or r<<cnt;   */