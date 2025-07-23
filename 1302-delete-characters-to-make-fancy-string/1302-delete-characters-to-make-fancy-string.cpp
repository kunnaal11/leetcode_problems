class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); ++i) {
            int n = ans.size();
            if (n >= 2 && ans[n-1] == s[i] && ans[n-2] == s[i]) {
                continue;
            }
            ans += s[i];
        }
        return ans;
    }
};
