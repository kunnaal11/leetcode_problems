class Solution {
public:
    //so bacsically we will balance'('and by')'an if'('is not the use'*'to balancethis) 
    bool checkValidString(string s) {
        stack<int>open;             // store al '('
        stack<int>star;             // store al '*'
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                open.push(i);
            else if(s[i]=='*')
                star.push(i);
            else   //')' case
            {
                if(!open.empty())     // take carry fro open
                    open.pop();
                else if(!star.empty())   //if open empty then use star carry
                    star.pop();
                else                    // if both are empty so end game
                    return false;
            }
        }
              //check if any extr '(' is remaining
           while(!open.empty())    //open is still remaining 
        {
            if(star.empty())       //if star is finesh befor open then somthing is wrong
                return false;
            else if(open.top() < star.top())
            {                    // this should bbe cond (*,then right 
                open.pop();      //so tke carry from open and star and ake them empty
                star.pop();
            }
            else                      //CASE: open.top() > star.top()
                return false;        // this cant )*    
        }
              
        
        return true;             //  except all true
    }
};