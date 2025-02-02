class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1)%n] )      //checking pick occurs >1 for its next ele
                cnt++;
        }

        

        return cnt <= 1; // if cnt is 0 ot 1 then its cyclic if >=2 then non cyclic
    }
};