class Solution {
     //optial M1 -->here we will creted same vector of n with 0 i.e [0,0,0,0,0...] and will replace it by origgnal        //vector valus by incrementing by 2 pov no starts with 0 index & neg with 1; tc & Sc->O(n);
    

public:      
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int pov=0; int neg=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[pov]=nums[i];
                pov+=2;
                
            }
            else{
                ans[neg]=nums[i];
                neg+=2;
                
            }
        }
       return ans;
    }
};






//M2 Bruth force --> ans1 array for +ve andd ans2 for -ve and add it in ans vector
// tc & sc O(n);
/*

public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans1, ans2,ans;
        
        for(int i=0;i<n;i++){
            if((nums[i])>0)  ans1.push_back(nums[i]);
            else  ans2.push_back(nums[i]);
        }
         int i = 0, j = 0;
        
        
        while ( i < ans1.size()  && j < ans2.size()) {
            ans.push_back(ans1[i]);
            i++;
            ans.push_back(ans2[j]);
            j++;
        }
     
       return ans;
    }
};

*/