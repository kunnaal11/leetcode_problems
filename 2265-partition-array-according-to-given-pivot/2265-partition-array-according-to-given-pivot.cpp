class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> right;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) left.push_back(nums[i]);
            if(nums[i]>pivot) right.push_back(nums[i]);
            else if(nums[i]==pivot){
                cnt++;
            }
        }
        
        vector<int>ans;
        for(auto it:left){
           ans.push_back(it);
        }
        while(cnt!=0){
            ans.push_back(pivot);
            cnt--;
        }
        for(auto it:right){
           ans.push_back(it);
        }
        return ans;
    }
};