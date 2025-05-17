class Solution {     //Dutch flag algo
public:
    void sortColors(vector<int>& nums) {
         int i=0,mid=0,j=nums.size()-1;
        
        while(mid<=j){
            
            if(nums[mid]==0){
                swap(nums[i],nums[mid]);
                i++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            } 
            else{                    //mid==2 i.e 2 shouuld be on last;
                swap(nums[mid],nums[j]);
                j--;
            }
            
        }
    }
};