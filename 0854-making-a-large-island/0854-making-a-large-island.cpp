class Solution {
public:
    int n;
    vector<vector<int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    int dfs(int i, int j, vector<vector<int>>& grid, int id) {
        if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != 1) {
            return 0;
        }
        grid[i][j] = id;
        int len = 1;                             //len will always start with 1(as curr ele is included)

        for (auto it : dir) {
            int i_ = it[0] + i;
            int j_ = it[1] + j;
            len += dfs(i_, j_, grid, id);
        }
        return len;
    }
    int largestIsland(vector<vector<int>>& grid) {
        n = grid.size();

        int maxlen = 0;
        unordered_map<int, int> mp;                                  //{id, its size}
        int id = 2;                 // id will start with 2 and go on

        for (int i = 0; i < n; i++) {                        //first cal all consequence 1 in grid using dfs and each consequence 1 pair contain unique id
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    int size = dfs(i, j, grid, id); 
                    maxlen = max(maxlen, size);
                    mp[id] = size;                          //storing {id, -->its size}
                    id++; 
                }
            }
        }
        //now replacing consequence 1 pairs(each pair has unique id)-->with its size()
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    unordered_set<int> st;

                    for (auto it : dir) {             //checking neibour pair 
                        int i_ = i + it[0];
                        int j_ = j + it[1];

                        if (i_ >= 0 && i_ < n && j_ >= 0 && j_ < n && grid[i_][j_] != 0) {
                            st.insert(grid[i_][j_]);           //storing in set to avoid repating pairs
                        }
                    }
                    int len = 1;               //len will always start with 1(as curr ele is included)
                    for (auto s : st) {
                        len += mp[s];
                    }

                    maxlen = max(len, maxlen);
                }
            }
        }
        return maxlen;
    }
};