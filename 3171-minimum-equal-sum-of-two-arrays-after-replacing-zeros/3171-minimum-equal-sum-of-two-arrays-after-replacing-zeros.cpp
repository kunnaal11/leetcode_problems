class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long z1 = 0, z2 = 0;
        long long sum1 = 0, sum2 = 0;

        for (long long i = 0; i < nums1.size(); i++) {
            if (nums1[i] == 0) z1++;
            sum1 += nums1[i];
        }

        for (long long i = 0; i < nums2.size(); i++) {
            if (nums2[i] == 0) z2++;
            sum2 += nums2[i];
        }

        sum1 += z1;  // replace zeros with ones
        sum2 += z2;

        if ((sum1 < sum2 && z1 == 0) || (sum2 < sum1 && z2 == 0) ) {
            return -1;
        }
        
        long long ans=max(sum1, sum2);
         return ans;
    }
};
