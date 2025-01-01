class Solution {
public:
    int maxScore(string s) {
        int total1=0;
        int maxi=-1;
        int cnt0=0;
        int cnt1=0;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') total1++;     //will count total1
        }

        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0') cnt0++;
            else cnt1++;
            
            sum = cnt0+ (total1-cnt1);
            maxi=max(sum,maxi);

        }
        return maxi;
    }

};