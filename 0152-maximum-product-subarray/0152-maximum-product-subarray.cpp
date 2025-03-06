class Solution {
public:
    int maxProduct(vector<int>& nums) {
      //  if(nums.size()<=1) return nums[0];
        int mul=1;
        int maxi1=INT_MIN;
         int maxi2=INT_MIN;

        for(int i=0;i<nums.size();i++){       //from left->right get max product1
            mul*=nums[i];
 
            maxi1=max(maxi1,mul);

            if(mul==0){
                mul=1;
            }

            
        }
         mul=1;     //re-initializing
         for(int i=nums.size()-1;i>=0;i--){       //from left<-right get max product2
            mul*=nums[i];

            maxi2=max(maxi2,mul);

            if(mul==0){
                mul=1;
            }

           
        }

        return max(maxi1,maxi2);
    }
};