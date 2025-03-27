class Solution {
public: vector<int> check(vector<int>&nums,int n){
        int cnt=0;
        int ele=0;
        for(int i=0;i<nums.size();i++){
             if(cnt==0){
                ele=nums[i];                           //Boyer-Moore Majority Vote
                cnt=1;
             }
             else if(nums[i]==ele){
                 cnt++;
             }
             else{
                cnt--;
             }
        }

        
        int freq=0;
        for(int i=0;i<n;i++){
            if(ele==nums[i]){
                freq++;
            }
        }
        if(freq>n/2){
           return {ele,freq};
        }
        return {-1,-1};
}
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> ans = check(nums,n);
        int ele=ans[0];
        int freq=ans[1];
        int Lcnt=0;                           //left freq cnt;

        for(int i=0;i<n;i++){
            if(nums[i]==ele){
                Lcnt++;
            }

            int Rcnt=freq-Lcnt;            //remining freq form right side;

            int n1=i+1;
            int n2=n-i-1;

            if(Lcnt*2 > n1 && Rcnt*2 > n2){             //{its Lcnt>n1/2 and Rcnt>n2/2}
                return i;
            }
        }
        return -1;
    }
};