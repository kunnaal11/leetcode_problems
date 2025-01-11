class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int>mp;
        if(s.size()<k) return false;
        for(auto ch:s){
            mp[ch]++;
        }
        int oddcnt=0;
        for(auto it:mp){
            if(it.second%2!=0){
                oddcnt++;
            }
        }
       if(oddcnt<=k) return true;
       else return false;
    }
};
/* 
Case 2: "aabbccdde", k = 3
Character frequencies: {'a': 2, 'b': 2, 'c': 2, 'd': 2, 'e': 1} (odd frequency of 'e').
oddCount = 1 (only 'e' has an odd count).
Since oddCount <= k (1 ≤ 3), we can split into 3 groups, one of which will handle 'e'.     
*/
