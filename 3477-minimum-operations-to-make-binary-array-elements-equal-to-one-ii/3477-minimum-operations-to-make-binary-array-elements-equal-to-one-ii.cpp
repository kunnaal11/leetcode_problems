class Solution {
public:
    int minOperations(vector<int>& nums) {
        bool flag=false;
        int flipcnt=0;
        
        for(auto it:nums){
            if(it==flag){
                flipcnt++;
                flag=!flag;
            }
            
        }
        return flipcnt;
    }
};
/*    It feels like the "II" problem is easier than the "I".

   When we see a zero, we must flip it (and the rest of the array):

    We add 1 to the result and invert the flip flag.
    We can figure out the value of remaining elements using the flip flag.     */