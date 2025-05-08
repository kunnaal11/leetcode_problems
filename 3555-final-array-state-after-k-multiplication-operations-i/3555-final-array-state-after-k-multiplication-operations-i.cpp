class Solution {
public: 
    int minEle(vector<int>& nums){
        
        int min=*min_element(nums.begin(), nums.end());
        return min;
 }
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
       
        while(k>0){

            int min_val=minEle(nums);

           for(int i=0;i<nums.size();i++){
            if(nums[i]==min_val){
                nums[i]=nums[i]*multiplier;
                break;
            }
            else{
                continue;
            }
           }
           k--;
        }
        return nums;
    }
};