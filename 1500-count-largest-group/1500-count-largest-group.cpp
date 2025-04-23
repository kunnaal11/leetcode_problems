class Solution {
public:
    int solve(int a){
        int sum=0;

        while(a>0){
            sum+=a%10;
            a/=10;
        }
        return sum;
    }
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> mp;
      
        for(int i=1;i<=n;i++){        //storing freq of each pair
            int sum=solve(i);
             mp[sum]++;
        }

        int maxfreq=-1;               //find max freq
        for(auto it:mp){
            maxfreq=max(maxfreq,it.second);
        }

        int cnt=0;                    //calc all pairs with max freq
        for(auto it:mp){
            if(it.second==maxfreq){
                cnt++;
            }
        }


        return cnt;
    }
};