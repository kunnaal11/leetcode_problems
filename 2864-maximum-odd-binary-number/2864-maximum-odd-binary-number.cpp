class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt1=0;
        int cnt0=0;
        for(int i=0;i<s.size();i++){
            if(s[i]&1) cnt1++;
            else cnt0++;
        }
        string ans="";
        for(int i=0;i<cnt1-1;i++){
            ans+="1";
        }
        for(int i=0;i<cnt0;i++){
            ans+="0";
        }
        ans+="1";
        return ans;
    }
};