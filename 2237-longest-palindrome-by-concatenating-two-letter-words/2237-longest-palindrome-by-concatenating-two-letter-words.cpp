class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        
        int cnt=0;
        for(auto str:words){
            string rev = "";
            rev += str[1];
            rev += str[0];

            if(mp[rev] >0){
                cnt+=4;
                mp[rev]--;
             }
             else{               //rev not exists
             mp[str]++;
             }
        }
                                                    // case of both same ele,"gg"
        for(auto it:mp){
            string str=it.first;
            int freq=it.second;

            if(str[0]==str[1] && freq){
                cnt+=2;
                break;
            }
        }

        return cnt;
    }
};