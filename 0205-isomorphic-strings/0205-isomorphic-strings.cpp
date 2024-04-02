class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> indexS(128, 0);
        vector<int> indexT(128, 0);
        int len=s.size();
        if(len!=t.size()) return false;
        
        for(int i=0;i<len;i++){
            if(indexS[s[i]]!=indexT[t[i]])
                return false;
            indexS[s[i]]=i+1;
            indexT[t[i]]=i+1;
        }
        return true;
    }
};