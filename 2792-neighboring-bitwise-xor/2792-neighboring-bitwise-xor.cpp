class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
       /* if(n&1) return true;

        vector<int> orignal(n,0);
        orignal[n-1]=derived[n-1];
        for(int i=0;i<n-1;i++){
            orignal[i]=derived[i]^derived[i+1];
        }
        return (derived!=orignal)?1:0;  */
        int sum=0;
        for(auto it:derived){
            sum^=it;
        }
        return (sum)?0:1;
    }
};