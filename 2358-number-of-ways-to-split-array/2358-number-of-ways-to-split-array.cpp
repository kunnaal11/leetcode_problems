class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long>presum(n+1,0);
        int cnt=0;

        for(int i=0;i<n;i++){
            presum[i+1]=presum[i]+nums[i];   //makin prefix sum array
        }

        for(int i=1;i<n;i++){
            if( presum[i] >= (presum[n]-presum[i]) ) cnt++;   //assume we cal the x sum till,remaining will be (total-x)
        }                                    //here no need to fing toatlsum in presum array last ele is totalsum i.e.(presum[n]) 
        
        return cnt;
    }
};