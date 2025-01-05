#include <numeric>
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
           int currgcd=nums[i],currlcm=nums[i];
           unsigned int currprob=nums[i];
           
            for(int j=i+1;j<nums.size();j++){
                currprob= currprob*nums[j];

                currgcd=gcd(currgcd,nums[j]);
                currlcm=lcm(currlcm,nums[j]);

                if(currprob==(currgcd*currlcm))
                maxi=max(maxi,j-i+1);
            }
        }
        return maxi;
    }
};   //inbbuild functio of gcd an lcm in c++