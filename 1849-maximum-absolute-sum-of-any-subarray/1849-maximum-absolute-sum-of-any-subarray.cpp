class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum = 0, minSum = 0, maxSum = 0;
        for (int num : nums) {
            sum += num;                        //prefix sum  approch
            if (sum > maxSum)
                  maxSum = sum;               //taking max ele  in prefix sum
        
            if (sum < minSum)
                   minSum = sum;               //taking min ele in prefix sum
            
        } 
        return abs(maxSum - minSum);           //max-min will result total dist(i.e. max sum subarray)
    }
};