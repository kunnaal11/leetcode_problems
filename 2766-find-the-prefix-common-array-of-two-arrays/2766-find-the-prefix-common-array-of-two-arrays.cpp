class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
       // unodered_map<int,int>mp;
        vector<int>ans(A.size());

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
        return ans;
    }
};