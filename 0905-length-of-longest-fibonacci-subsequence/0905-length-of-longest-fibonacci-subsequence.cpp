class Solution {
public:
    int solve(int j,int k,vector<int>& arr, unordered_map<int,int>& mp){
        int target=arr[k]-arr[j];                                      //if a+b=c then a=c-b

        if(mp.count(target) && mp[target]<j){
            int i=mp[target];
            return solve(i,j,arr,mp)+1;               //this +1 to manage the length =3 in endd for a,b,c
        }

        return 2;
    }
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=i;
        }
        int maxlen=0;
        for(int j=1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                int len=solve(j,k,arr,mp);
                if(len>=3){
                    maxlen=max(maxlen,len);
                }
            }
        }
        
        return maxlen;
    }
};