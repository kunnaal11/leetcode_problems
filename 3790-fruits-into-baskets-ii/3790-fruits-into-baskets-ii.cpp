class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int cnt=0;
        int n=fruits.size();
        vector<int> visited(n,false);

         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if(fruits[i]<=baskets[j] && visited[j]==false){
                visited[j]=true;
                break;
               }
             }
        }
        for(auto it:visited){
            if(it == false){
                cnt++;
            }
        }
        return cnt;
    }
};