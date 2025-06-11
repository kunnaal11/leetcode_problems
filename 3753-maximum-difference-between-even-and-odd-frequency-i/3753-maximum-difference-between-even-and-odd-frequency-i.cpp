class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;

        for(int i=0;i<s.size();i++){
            char ch=s[i];
            mp[ch]++;
        }

        int maxi=INT_MIN,mini=INT_MAX;
        
        for(auto it:mp){
            if(it.second &1) {
                maxi=max(maxi,it.second);
            }
            else if(it.second %2==0){
                mini=min(mini,it.second);
            }
        }
        return (maxi-mini);
    }
};