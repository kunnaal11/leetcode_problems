class Solution {
public:
    bool hasSameDigits(string s) {

     

        while (s.length() > 2) {
            string temp="";
            for (int i = 0; i < s.size() - 1; i++) {
                int sum = (s[i] - '0' + s[i + 1] - '0') % 10;
                temp += to_string(sum);
            }
            s = temp; // updating string
        }

        return s[0] == s[1];
    }
};