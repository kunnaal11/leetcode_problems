class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        if(nums[0]<k) return -1;

        vector<int> freq(101,0);
        int cnt=0;
        for(auto it:nums){
            freq[it]++;

            if( it > k && freq[it]==1 ){
                cnt++;
            }
        }
        return cnt++;
    }
};