class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;

        while(left<=right){
            int mid=(left+right)/2;

            if(nums[mid]==target) return mid;
            if(nums[left]<=nums[mid]){                          //i.e left part is sorted
                if(nums[left]<=target && target<=nums[mid]) right=mid-1;
                else left=mid+1;
            }
            else{                                              //i.e right part is sorted
                if(nums[mid]<=target && target<=nums[right]) left=mid+1;
                else right=mid-1;
            }
        }
        return -1;
    }
};