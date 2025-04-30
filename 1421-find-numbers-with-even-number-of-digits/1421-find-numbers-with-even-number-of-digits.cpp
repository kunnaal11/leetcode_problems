class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        string str;
        for(auto it:nums){
            str = to_string(it);

            if(str.size()%2 == 0) cnt++;
          
        }
        return cnt;
    }
};