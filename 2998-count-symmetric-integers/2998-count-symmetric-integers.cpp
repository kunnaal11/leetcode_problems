class Solution {
public:
    bool check(int n){
        string ele=to_string(n);

        if(ele.size()&1) return false;              //odd lenth n is not accpted

        int sum1=0,sum2=0;
        int i=0,j=ele.size()-1;
        while(i<j){
            sum1+=ele[i]-'0';
            sum2+=ele[j]-'0';
            i++;
            j--;
        }
        return sum1!=sum2 ? false:true;
    }
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            if(check(i)){
                  cnt++;
            }
        }
        return cnt;
    }
};