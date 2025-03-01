class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();

        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                continue;
            }
            else{
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        vector<int>temp(n,0);
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                temp[j]=nums[i];
                j++;;
            }
            else{
                  continue;
            }
        }
        return temp;
    }
};