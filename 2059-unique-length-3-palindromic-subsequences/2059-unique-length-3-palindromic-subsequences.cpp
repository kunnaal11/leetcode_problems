class Solution {
public:
    int countPalindromicSubsequence(string str) {
        vector<int> first(26, -1);                    //storing first and last occurence of eles
        vector<int> last(26, -1);

        for (int i = 0; i < str.size(); i++) {
            int curr = str[i] - 'a';                //converting into no for index
            if (first[curr] == -1) { 
                first[curr] = i;         // first ele gets when its value is -1, and store its index in first array
            } else {
                last[curr] = i;             //if its occure again in string then store after comin in last array
            }
        }
        //find unique char between first and last occrence letter
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (last[i] == -1) {            //Skip characters not present in the string
                continue;
            } else {           //unique char between first and last 

                unordered_set<char> st;
                for (int j = first[i] + 1; j < last[i]; j++) {
                    st.insert(str[j]);
                }
                ans = ans + st.size();       //ans update
            }
        }
        return ans;
    }
};