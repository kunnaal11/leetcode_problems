//we are using recurisive function with 1 pointer 
//we can also solve it by using for loop with 2 pointers 

//Approch : for this particular question the string is not in proper order so make new string and then perform check //function on it  i.e. s = "A man, a plan, a canal: Panama" --> s2= "amanaplanacanalpanama" now apply check function //onn it
class Solution {
private: 
    bool check(vector<char>&s2, int ind, int n)
    {
        if(ind >= n/2) return true;

        if(s2[ind] != s2[n-ind-1])
        {
            return false;
        }

        return check(s2, ind+1, n);
    }
public:
    bool isPalindrome(string s) 
    {
        vector<char>s2;
        for(int i = 0; i < s.length(); i++)
        {
            if(islower(s[i]) || isupper(s[i]))
            {   
                s2.push_back(tolower(s[i]));
            }
            else if(s[i] >= '0' && s[i] <= '9')
            {
                s2.push_back(s[i]);
            }
        }
        return check(s2, 0, s2.size());
    }
};