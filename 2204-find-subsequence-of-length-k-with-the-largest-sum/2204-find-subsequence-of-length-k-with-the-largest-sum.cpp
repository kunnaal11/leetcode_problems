class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();

        vector<pair<int,int>> result;        //store {ind,val}

        for(int i=0;i<nums.size();i++){
            result.push_back({i,nums[i]});    
        }

        auto lambda =[](auto &P1,auto &P2){
            return P1.second >P2.second;
         };
         
        sort(begin(result), end(result),lambda);   //sorting basis of val i.e. second term

    

        sort(begin(result), begin(result)+k);    //sort default first terms till k-ele

         vector<int> ans;
        for (int i = 0; i < k; i++) {
          ans.push_back(result[i].second);
        }

        return ans;
    }
};
