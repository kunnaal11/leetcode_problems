class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0) return 0;
       
        int cnt=1;
        int maxi=1;
        
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i++){
             if(nums[i]==nums[i-1]+1) {
                cnt++;
                maxi=max(cnt,maxi);
             }
             else if(nums[i]==nums[i-1]){
                  continue;
             }
             else {
                 cnt=1;
             }
        }
        return maxi;
    }
};