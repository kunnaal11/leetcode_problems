class Solution {
public:
    string triangleType(vector<int>& nums) {
        int maxEle=nums[0];
        int Tsum=nums[0];
        
        for(int i=1;i<3;i++){
            Tsum+=nums[i];
            if(nums[i]>maxEle){
                maxEle=nums[i];
                
            }
        }
        if(maxEle >= Tsum-maxEle) return "none";

        if(nums[0]==nums[1] && nums[1]==nums[2] ) return "equilateral";
        else if( (nums[0]==nums[1] && nums[1]!=nums[2]) || (nums[1]==nums[2] && nums[1]!=nums[0]) || (nums[0]==nums[2] && nums[0]!=nums[1])) return "isosceles";
        else if( maxEle < Tsum-maxEle ) return "scalene";
        else return "none";
    }
};