class Solution {    //Logic--> badpair=Total-goodpair  Total=n*(n-2)/2
public:                
    long long countBadPairs(vector<int>& nums) {
        long long goodpair=0,n=nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            int key=nums[i]-i;
            goodpair += mp[key];
            mp[key]++;
        }
        return ( n*(n-1)/2 - goodpair);
    }
};