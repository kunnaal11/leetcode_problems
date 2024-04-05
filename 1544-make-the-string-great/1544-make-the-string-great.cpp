class Solution {
public:
    string makeGood(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            ans+=s[i];   //wil add first ele in ans and check the condition 
            while(ans.size()!=0 && abs(s[i+1]-ans.back())==32){
                ans.pop_back();   //if stisfy then delete last ele in ans ans i++ go net
                i++;
            }
        }
        return ans;
    }
};
// note askii of lowerchar=upperchar+32