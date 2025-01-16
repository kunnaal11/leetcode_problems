class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int sum=0;
        //Case1:if n1=even,n2=odd ans=even(arr1) only 
        if(n2&1){
            for(int i=0;i<n1;i++){
                sum^=nums1[i];
            }
        }
        //Case2:if n1=odd,n2=even ans=even(arr2) only 
        if(n1&1){
            for(int i=0;i<n2;i++){
                sum^=nums2[i];
            }
        }
        return sum;
    }
};