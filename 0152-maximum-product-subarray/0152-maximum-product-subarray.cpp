class Solution {
public:
    int maxProduct(vector<int>& nums) {
      //  if(nums.size()<=1) return nums[0];
        int mul=1;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++){
            mul*=nums[i];

            maxi=max(maxi,mul);

            if(mul==0){
                mul=1;
            }

            
        }
         mul=1;     //re-initializing
         for(int i=nums.size()-1;i>=0;i--){
            mul*=nums[i];

            maxi=max(maxi,mul);

            if(mul==0){
                mul=1;
            }

           
        }

        return maxi;
    }
};