class Solution {
public:
    bool check(string& str){
         char first = str[0];
        char last = str[str.size() - 1];
        return (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') &&
               (last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u');
    }
    
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int> presum(n+1,0);     //make array of+1 size more bcoz willstore count of previous in crr

        for(int i=0;i<n;i++){
            if(check(words[i])){
            presum[i+1]=presum[i]+1;    
            }                              //here store and directily incrementing val based on prev totalcounts
            else{ presum[i+1]=presum[i]; }
        }
        vector<int>ans;
        for(auto it:queries){
            int cnt=presum[it[1]+1]-presum[it[0]];
            ans.push_back(cnt);
        }
       return ans;
    }
};