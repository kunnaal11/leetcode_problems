class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mp;
        int cnt=0;
        for(auto it:s){
             mp[it]++;
        }  
        for(auto it:mp){
            if(it.second==0) continue;
            if(it.second&1) cnt+=1;
            else cnt+=2;
        }    
        return cnt;  
    }
};


//##Here the catch to count occurence of char each
//if odd -->1 ele in last remain
//if even -->2 ele in last remain