class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>sd;
        
        for(int i=0;i<num.size();i++){
            while( k>0 && !sd.empty() && num[i]<sd.top() ){
                k--;
                sd.pop();
            }
            if(!sd.empty() || num[i]!='0') sd.push(num[i]);
        }
        
        while( k>0 && !sd.empty()){
            k--;
            sd.pop();
        }
        
        if(sd.empty()) return "0";
        string ans="";
        while(!sd.empty()){
            ans+=sd.top();
            sd.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};