class Solution {
public: // Majority Element--> Moore's Voting Algorithm;
    int majorityElement(vector<int>& v) {
        //step 1: find the candiadate ele to the majority ele
        int el;
        int cnt=0;
        for(int i=0;i<v.size();i++){
            if(cnt==0){
                cnt=1;
                el=v[i];
            }
            else if(v[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
            
        }
        
        //step 2: conform weather  it is majority ele or not conition of (n/2)
        int cnt1=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==el) cnt1++;
        }
        if(cnt1>v.size()/2) return el;
        else return -1;
        
    }
};