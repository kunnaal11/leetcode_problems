class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxele=-1,n=nums.size();
       
        for(int i=0;i<n;i++){
            maxele=max(maxele,nums[i]);           //finding maxele

        }
        int i=0,j=0;
        long long cnt=0,maxcnt=0;

        while(j<n){
            if(nums[j]==maxele){
                maxcnt++;
            }
            //window shrinking
            while(maxcnt>=k){
                cnt=cnt+(n-j);
                if(nums[i]==maxele){
                    maxcnt--;
                } i++;
            }
            j++;
        }

        
        return cnt;
    }
};