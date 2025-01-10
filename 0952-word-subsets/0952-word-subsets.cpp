class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> maxcnt(26, 0);
        for (auto word : words2) {
            vector<int> cnt2(26, 0);
            for (char c : word) {
                cnt2[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                maxcnt[i] = max(maxcnt[i], cnt2[i]);
            }
        }
        vector<string> ans;
        for (auto word : words1) {
            vector<int> cnt1(26, 0);
            for (char c : word) {
                cnt1[c - 'a']++;
            }
            bool flag=true;
            for(int i=0;i<26;i++){
                if(cnt1[i]<maxcnt[i]) 
                flag=false;
            }
            if(flag){
                ans.push_back(word);
            }
        }

        return ans;
    }


};
