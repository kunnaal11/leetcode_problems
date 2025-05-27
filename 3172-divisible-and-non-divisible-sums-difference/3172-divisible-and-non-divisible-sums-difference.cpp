class Solution {
public:
    int differenceOfSums(int n, int m) {
        int Include=0,notInclude=0;
        for(int i=1;i<=n;i++){
            if(i%m !=0) notInclude+=i;
            else Include+=i;
        }
        return (notInclude-Include);
    }
};