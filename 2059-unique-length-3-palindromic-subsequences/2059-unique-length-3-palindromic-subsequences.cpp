class Solution {
public:
    int countPalindromicSubsequence(string str) {
        vector<int> first(26, -1);
        vector<int> last(26, -1);

        for (int i = 0; i < str.size(); i++) {
            int curr = str[i] - 'a';
            if (first[curr] == -1) {
                first[curr] = i;
            } else {
                last[curr] = i;
            }
        }

        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (last[i] == -1) {
                continue;
            } else {

                unordered_set<char> st;
                for (int j = first[i] + 1; j < last[i]; j++) {
                    st.insert(str[j]);
                }
                ans += st.size();
            }
        }
        return ans;
    }
};