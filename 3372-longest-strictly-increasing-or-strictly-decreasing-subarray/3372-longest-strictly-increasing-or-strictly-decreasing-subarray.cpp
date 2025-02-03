class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1,dec=1;
        int maxinc=0,maxdec=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) dec++;
            else dec=1;
            maxdec=max(maxdec,dec);
        }
         for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]) inc++;
            else inc=1;
            maxinc=max(maxinc,inc);
        }
        int ans=max(maxinc,maxdec);
        return (ans==0)?nums.size():ans;
        }
};