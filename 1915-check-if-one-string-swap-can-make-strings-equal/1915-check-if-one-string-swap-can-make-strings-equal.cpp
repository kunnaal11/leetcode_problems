class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

       int n=s1.size(),m=s2.size();
        if(n!=m) return false;
         vector<int> freq1(26,0),freq2(26,0);

            for(int i=0;i<n;i++){
                freq1[s1[i]-'a']++;
                freq2[s2[i]-'a']++;
            }

            for(int i=0;i<26;i++){
                if(freq1[i]!=freq2[i])
                return false;
            }
            int cnt=0;
            for(int i=0;i<n;i++){
                if(s1[i]!=s2[i]){
                    cnt++;
                }
            }

        
        return (cnt<=2)?1:0;
    }
};