class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        int cnt = 0;
        int window = 0;

        if (k > n)
            return 0;

        for (int i = 1; i < n + k; i++) {
            if (colors[(i - 1) % n] != colors[i % n]) {
                window++;
            } else {
                window = 1;
            }

            if (window >= k) {
                cnt++;
            }
        }

        return cnt;
    }
};