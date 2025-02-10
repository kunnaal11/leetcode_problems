class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
       for (char ch : s) {
            if (isdigit(ch)) {                          // Check if the character is a digit
                if (!st.empty()) {
                    st.pop();                          // Remove the last non-digit character
                }
             } 
            else {
                st.push(ch);                           // Push only non-digit characters
            }
        }
        
        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;                     // Build the string correctly
            st.pop();
        }
        
        return ans;
    }
};