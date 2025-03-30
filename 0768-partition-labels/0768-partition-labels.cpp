class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastIndex(26,0);            

        for(int i=0;i<s.size();i++){
            int ch=s[i]-'a';
            lastIndex[ch]=i;                 //it will store last index of each ele 
        }

        vector<int>ans;
        int start=0,end=0;
        
        for(int i=0;i<s.size();i++){
            int ch = s[i]-'a';

             end=max(end,lastIndex[ch]);

              
             if(i==end){                         //if curr = end then we found partition
                ans.push_back(end-start+1);
                start=i+1;
             }                       
         }

        return ans;
    }
};