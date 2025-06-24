class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
  
        vector<int> ans;
        vector<int> freq(1001,0);              //ind,cnt
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]==key){
                    if(abs(i-j)<=k){
                        freq[j]++;
                    }
                }
            }
        }
       for(int i=0;i<1001;i++){
         if(freq[i]) ans.push_back(i);
       }
       return ans;
    }
};