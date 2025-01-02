class Solution {
public:
    bool check(string& str){
         char f = str[0];
        char l = str[str.size() - 1];
        if( (f=='a' || f=='e' || f=='i' || f=='o' || f=='u') && (l=='a' || l=='e' || l=='i' || l=='o' || l=='u') )
        return true;
        else return false;
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
        for(auto subquerie : queries){
            int l=subquerie[0];   //here chose subquerie ind 0&1 bcoz each queries has only tow ind start and end
            int r=subquerie[1];
            int cnt=presum[r+1]-presum[l];  //just subracting countat that place in presum array,no neet too count all count one by on directly take difffrence of r-l
            ans.push_back(cnt);
        }
       return ans;
    }
};