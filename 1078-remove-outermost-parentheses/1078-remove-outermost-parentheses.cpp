class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string> output;
        int in=0,close=0;
        int score=0;
        string curr="";
        for(int i=0;i<s.size();i++){

            if(s[i]=='(') in++;
            if(s[i]==')') close++;

            curr+=s[i];
            score=in-close;
            if(score ==0){
              output.push_back(curr);
              curr="";
            }
            score=0;
        }

        string ans="";
        for(auto it:output){
            ans+=it.substr(1,it.size()-2);
        }
        return ans;
    }
};