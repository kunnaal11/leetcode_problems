class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            
            if(digits[i]<9){
                //if last digit is anything
                digits[i]+=1;
                return digits;
            }
            else{
                //if last digit==9 make it 0;
                digits[i]=0;
            }    
       }
         digits.insert(digits.begin(),1);
        return digits;
        }
        
        
    
   // return digits;
};