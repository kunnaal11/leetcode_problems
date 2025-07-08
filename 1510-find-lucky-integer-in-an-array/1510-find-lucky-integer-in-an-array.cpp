class Solution {
public:
    int findLucky(vector<int>& arr) {
      //  unordered_map<int,int> mp;
      vector<int> mp(501,0);
       
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        int ele=-1;
        for(int i=1;i<501;i++){
            if(mp[i] && mp[i] == i){
                ele=max(ele,i);
            }
           
        }
        return ele;
    }
};