class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1) return nums[0];               //edge cases*
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        

        int left=1,right=n-2;
        while(left <= right){

            int mid = left +(right-left)/2;

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];                                    //mil gaya
            }

            if( (mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2==1 && nums[mid]==nums[mid-1]) ){
                left=mid+1;                                //rule follows-->means ele will be in right part
            }
            else{     //if rule not follow-->occurs in left
               right=mid-1;
            }
        }
        return -1;
    }
};


//     if mid is even, then it's duplicate should be in next index.
// first ele alway=even indx,second=odd indx.-->if its follow this then ,ele is i right ,othervise its in left