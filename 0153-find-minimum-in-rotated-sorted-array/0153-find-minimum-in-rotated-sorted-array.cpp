class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        int ele=INT_MAX;

        while(left<= right){
            int mid=left + (right-left)/2;
            
            if(nums[mid]<ele){
                ele=nums[mid];
            }
            if(nums[mid]< nums[right] ){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return (ele != INT_MAX) ? ele : 0 ;
    }
};