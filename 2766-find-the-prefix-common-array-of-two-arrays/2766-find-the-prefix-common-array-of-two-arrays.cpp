class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>temp(n+1,0);                 //M2 Greedyapproch
        vector<int>ans(n);
        int cnt=0;
        for(int i=0;i<n;i++){

            temp[A[i]]++;
            if(temp[A[i]]==2){
                cnt++;
            }

             temp[B[i]]++;
            if(temp[B[i]]==2){
                cnt++;
            }
              ans[i]=cnt;
        }
       return ans;
     /*   vector<int>ans(A.size());                     //M1 BruthForce
         for(int i=0;i<A.size();i++){
            bool flag=false;
            for(int j=0;j<A.size();j++){
                if(A[i]==B[j]){
                    flag=true;
                }
                if(flag==true && j>=i){
                    ans[j]++;
                }
            }
        }
        return ans;      */
    }
};