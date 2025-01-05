class Solution {  //USing #Diffrence-Array Concept
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> arr(n + 1, 0); //array to store net shifts

       // Build the difference array
        for (const auto& shift : shifts) {
            int L = shift[0];
            int R = shift[1];
            int dir = shift[2];

            if (dir == 1) {
                arr[L] += 1;
                arr[R + 1] -= 1;
            } else {                                // if dir=0 decrement first
                arr[L] -= 1;
                arr[R + 1] += 1;
            }
        }

                                                            // calculate prefix sum
        for (int i = 0; i < n - 1; i++) {
            arr[i + 1] += arr[i];
        }
                                                   // Apply the shifts
        string ans = s;
        for (int i = 0; i < n; i++) {
            int shift = arr[i] % 26;               // Ensure the shift is within range of char's
            if (shift < 0)
                shift += 26;                       // Make the shift positive
            ans[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }

        return ans;
    }
};