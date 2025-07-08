class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto it:arr){
            mp[it]++;
        }
        int ele=-1;
        for(auto it:mp){
            if(it.first == it.second ){
                ele=max(ele,it.first);
            }
        }
        return ele;
    }
};