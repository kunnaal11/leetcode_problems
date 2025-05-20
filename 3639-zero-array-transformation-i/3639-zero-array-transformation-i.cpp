class solution {         //diffrencd array technique(concept)
public: 
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> dec(n + 1, 0);  // helps us track how many times to subtract each index

        // Mark the range for subtraction using dec array
        for (auto& q : queries) {
            int start = q[0];
            int end = q[1];
            dec[start] += 1;          // start subtracting from here
            if (end + 1 < n) {
                dec[end + 1] -= 1;    // stop subtracting after end
            }
        }

        // Apply the subtraction to nums
        int subtract = 0;
        for (int i = 0; i < n; ++i) {
            subtract += dec[i];              // how many times to subtract at index i
            nums[i] = max(0, nums[i] - subtract);  // do subtraction safely
        }

        // Now check if all numbers are zero
        for (int num : nums) {
            if (num != 0) return false;
        }
        return true;
    }
};
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> dec(n + 1, 0);  // helps us track how many times to subtract each index

        // Mark the range for subtraction using dec array
        for (auto& q : queries) {
            int start = q[0];
            int end = q[1];
            dec[start] += 1;          // start subtracting from here
            if (end + 1 < n) {
                dec[end + 1] -= 1;    // stop subtracting after end
            }
        }

        // Apply the subtraction to nums
        int subtract = 0;
        for (int i = 0; i < n; ++i) {
            subtract += dec[i];              // how many times to subtract at index i
            nums[i] = max(0, nums[i] - subtract);  // do subtraction safely
        }

        // Now check if all numbers are zero
        for (int num : nums) {
            if (num != 0) return false;
        }
        return true;
    }
};
