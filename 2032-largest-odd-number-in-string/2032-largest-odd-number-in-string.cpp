class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        if(num[n-1]-'0'&1) return num;
        for(int k=n-1;k>=0;k--){
            if(num[k]-'0'&1) return num.substr(0,k+1);
        }
        return "";
    }
};