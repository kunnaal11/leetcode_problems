class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
         vector<int> left(n,1);
         vector<int> right(n,1);
        
        left[0]=1;      // for understanding that will start with 1st indexx
        for(int i=1;i<n;i++){
            left[i]=left[i-1]*nums[i-1];
           
        }
        
        right[n-1]=1;    //its last right ele
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
           
        }
        
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
           
        }
    
        return ans;
    }
};// approch ans= left * [i] * right;
//will find all left mul of i 
//will find all right mul of i 
//and final multiple it ans
// note for 1st ele there is no left so start from 1
//and for right 2nd last