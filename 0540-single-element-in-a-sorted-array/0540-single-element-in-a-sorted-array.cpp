class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ele=0;
        for(auto it:nums){
            ele^=it;
        }
        return ele;
    }
};