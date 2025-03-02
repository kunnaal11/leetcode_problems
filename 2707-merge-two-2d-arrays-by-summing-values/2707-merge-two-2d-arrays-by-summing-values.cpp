class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        for(auto it:nums1){
            int ind=it[0];
            int val=it[1];
            mp[ind]=val;
        }
        for(auto it:nums2){
            int ind=it[0];
            int val=it[1];
            if(mp.count(ind)){
                mp[ind]+=val;
            }
            else{
                mp[ind]=val;
            }
        }
        for(int i=1;i<=mp.size();i++){
            if(mp[i]){
                int vall=mp[i];
                ans.push_back({i,vall});
            }
            
        }
       // sort(begin(ans),end(ans));
        return ans;
    }
};