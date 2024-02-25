class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]= map[nums[i]]+1
                ;
            if(map[nums[i]]>2) return 0;
        }
        return 1;
        // M-1 logic iss that we need to find if any no is occcuring >2 then it will false
        
        // M-2 sort and if 1st and 3rd same then false else true;
        
      /*    sort(nums.begin(),nums.end());
        for(int i=2;i<nums.size();i++){
            if(nums[i-2]==nums[i]) return 0;
            
        }
        return 1;   */
    }
};