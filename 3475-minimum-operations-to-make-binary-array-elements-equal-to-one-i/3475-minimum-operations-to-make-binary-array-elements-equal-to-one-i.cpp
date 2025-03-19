class Solution {
public:
    int minOperations(vector<int>& nums) {
        int flipcnt=0;
        int n=nums.size();

        for(int i=0;i<n-2;i++){          //we wiil go till n-2 bcoz the last ele or 2nd last ele is useless,we need atleast 3 ele in last so to,manage that case go till n-2;
           if(nums[i]==0){

            for(int j=i;j<=i+2;j++){
                nums[j]=!nums[j];
            }
            flipcnt++;
           }
        }
        return (nums[n-1] && nums[n-2] == 1 ) ? flipcnt : -1;
    }
};


//idea :is nums[i]==0 then flip i,i+1,i+2
// nums[n-1] && nums[n-2] == 1; it means all ele in  arr gets 1 