class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (nums[mid] == k)
                return true;
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
                continue;
            }
            
            if (nums[left] <= nums[mid]) {                        // i.e left part is sorted
                if (nums[left] <= k && k <= nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            } 
            
            else {                                          // i.e right part is sorted
                if (nums[mid] <= k && k <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return false;
    }
};