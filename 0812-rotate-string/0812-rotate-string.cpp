class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n=s.size(),m=goal.size();
        if(n!=m) return false;
        
        string A_poss =s+s;
       if(A_poss.find(goal)!=string::npos) return true;
       
      return false; 
    }
};
//for finnding same/substring part in another string 
//' words[j].find(words[i])!=string::npos 