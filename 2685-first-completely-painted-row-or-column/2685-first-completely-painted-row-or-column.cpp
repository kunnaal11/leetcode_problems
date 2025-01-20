class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int r = mat.size();                    // row
        int c = mat[0].size();                 // col
        unordered_map<int, pair<int, int>> mp; //{val,indx}
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int val = mat[i][j];
                mp[val] = {i, j};
            }
        }
        vector<int> rowcnt(r, 0);
        vector<int> colcnt(c, 0);

        for (int i = 0; i < arr.size(); i++) {
            int val = arr[i];

            pair<int, int> cell = mp[val];       // Retrieve the row and column for the value
            int row = cell.first;
            int col = cell.second;
                                              // Increment counters for the painted row and column
            rowcnt[row]++;
            colcnt[col]++;

            if (rowcnt[row] == c || colcnt[col] == r) {
                return i;
            }
        }
        return -1;
    }
};