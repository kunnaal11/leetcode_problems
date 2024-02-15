class Solution {
private:
      long long sumofall(vector<int> &nums){
          long long sum=0;
          for(int i=0;i<nums.size();i++){
              sum+=nums[i];
          }
          return sum;
      }
public:
    long long largestPerimeter(vector<int>& nums) {
        int n =nums.size();
        long long total=sumofall(nums);
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=0;i--){
            if((total-nums[i])>nums[i]) return total;
            total-=nums[i];
        }
        return -1;
    }
};