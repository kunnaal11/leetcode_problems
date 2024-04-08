class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       
        int cnt0=0,cnt1=0,total=students.size();
        for(auto s:students){
            if(s==0)
                cnt0++;
      }
        
        cnt0, cnt1=total-cnt0;
        
        for(int i=0;i<sandwiches.size();i++){
           if(sandwiches[i]==0){
               if(cnt0>0){
                    cnt0--;
                    total--;
               }
               else{               // i.e. count0 =0 so return total
                   return total;
               }
            }
            
           else{                   // when sandwish =1
               if(cnt1>0){        // if ones count >0
                    cnt1--;
                    total--;
               }
               else{              // i.e. count1 =0 so return total
                   return total;
               }
            } 
                
        }
        
        return 0;          // is nothingg left that means all students are able to eat.
    }
};
//approch > wil check for each ele of sandwish and equate with student if not equal the 
// o to next ele of student and check with sndwish