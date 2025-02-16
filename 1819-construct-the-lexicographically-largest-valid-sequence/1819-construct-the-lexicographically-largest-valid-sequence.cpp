class Solution {
public:
    bool solve(int i, int n, vector<int>& nums, vector<bool>& used) {
        if (i >= nums.size()) { // base condi
            return true;
        }
        if (nums[i] != -1) {
            return solve(i + 1, n, nums, used);
        }

        for (int k = n; k >= 1; k--) {
            if (used[k]) {
                continue;
            }

            // try
            used[k] = true;
            nums[i] = k;

            // explore
            if (k == 1) {
                if(solve(i + 1, n, nums, used) == true){
                     return true;
                  }
            } 
            else {
                int j = i + nums[i];
                if ( j < nums.size() && nums[j] == -1) {
                    nums[j] = k;                                  // assinging 2 ele postion
                    if (solve(i + 1, n, nums, used) == true) {
                        return true;
                    }
                    nums[j] = -1;
                }
            }

            // undo
            used[k] = false;                    //backtrack
            nums[i] = -1;
        }
        return false;
    }

public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> ans(2 * n - 1, -1);

        vector<bool> used(n + 1, false);

        solve(0, n, ans, used);
        return ans;
    }
};