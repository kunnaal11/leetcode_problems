class Solution {
public:
    bool isValid(string word) {
        int v=0,c=0;
        if(word.size() < 3) return false;

        for(auto ch:word){

           if( !isalnum(ch)) return false;

           if(isalpha(ch)){
            char lower =tolower(ch);

            if(lower =='a' ||lower =='e' ||lower =='i' ||lower =='o' ||lower =='u' ) v++;
            else c++;

           }
        }
        return (v>=1 && c>=1) ;
    }
};