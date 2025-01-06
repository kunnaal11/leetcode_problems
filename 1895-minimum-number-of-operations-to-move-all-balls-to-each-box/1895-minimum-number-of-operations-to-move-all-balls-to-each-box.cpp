class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();                               //M1-bruth force
     /*   vector<int>ans(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && boxes[j]=='1'){
                    ans[i]+=abs(j-i);
                }
            }
        }
        return ans;     */
                                                         //M2- prefix traversal ,suffix travel
        vector<int>ans(n);
        vector<int>left(n);
        vector<int>right(n);

        int balls=boxes[0]-'0';
        for(int i=1;i<n;i++){
             left[i]=left[i-1]+balls;
             balls+=boxes[i]-'0';
        }

         balls=boxes[n-1]-'0';
        for(int i=n-2;i>=0;i--){
             right[i]=right[i+1]+balls;
             balls+=boxes[i]-'0';
        }

        for(int i=0;i<n;i++){
            ans[i]=left[i]+right[i];
        }
    
    return ans;
    }
};