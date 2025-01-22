class Solution {
public:
    typedef pair<int, int> pp;
    vector<vector<int>> direction{{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

    vector<vector<int>> highestPeak(vector<vector<int>>& iswater) {
        int m = iswater.size();
        int n = iswater[0].size();
        vector<vector<int>> height(m, vector<int>(n, -1));    //make 2d array with -1

        queue<pp> que;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (iswater[i][j] == 1) {    
                    height[i][j] = 0;          //this is catch that:If the cell is a water cell(i.e 1), its height must be 0 
                    que.push({i, j});
                }
            }
        }

        while (!que.empty()) {
            int N = que.size();
            while (N--) {
                pp curr = que.front();           //to store curr pair 
                que.pop();

                int i = curr.first;
                int j = curr.second; // currecnt ele stored in qqueue

                for (auto it : direction) {
                    int i_ = i + it[0];
                    int j_ = j + it[1]; // adjacent ele of that ele

                    if (i_ >= 0 && i_ < m && j_ >= 0 && j_ < n && height[i_][j_] == -1) {
                        height[i_][j_] = height[i][j] + 1;              //adding just +1 to maximise it,but adjDiff should be 1
                        que.push({i_, j_});                          //will push that ele in queue ,to check its adj and so on
                    }
                }
            }
        }

        return height;
    }
};