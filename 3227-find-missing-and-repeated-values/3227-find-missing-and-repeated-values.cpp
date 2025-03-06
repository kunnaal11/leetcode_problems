class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        int sum = 0;
        unordered_map<int, int> mp;
        int rep = -1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {  // n x n grid
                sum += grid[i][j];
                mp[grid[i][j]]++;
            }
        }
        for (auto it : mp) {
            if (it.second == 2) {
                rep = it.first;
            }
        }
        int totalSum = (n * n * (n * n + 1)) / 2;
        int miss = totalSum - sum + rep;

        ans.push_back(rep);
        ans.push_back(miss);
        return ans;
    }
};
