class Solution {
public:
    bool check(int i, unordered_map<int,int>& mp1){
        int lastele=0;
        int num=i;

        unordered_map<int,int> mp2;
        while(num>0){
            lastele=num%10;
            mp2[lastele]++;
            num/=10;
        }

        for (auto it : mp2) {
        if (mp1[it.first] < it.second) return false;
    }
        return true;
        
    }
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        vector<int>ans;

        unordered_map<int,int> mp1;
        for(auto it:digits){
            mp1[it]++;
        }
        for(int i=100;i<=999;i++){
            if(i%2==0){            //checking for even
                if(check(i,mp1)){
                 ans.push_back(i);
                }
            }
        }
        return ans;

    }
};