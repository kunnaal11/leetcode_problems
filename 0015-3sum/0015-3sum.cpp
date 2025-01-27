class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();

        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++) {
            if (i > 0 && arr[i] == arr[i - 1])
                continue;

            int j = i + 1;                     //i-fix twopointers(j,k)
            int k = n - 1;
            while (j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum > 0) {
                    k--;
                } else if (sum < 0) {
                    j++;
                } else { // equal 0
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    j++;
                    k--;
                    ans.push_back(temp);

                    while (j < k && arr[j] == arr[j - 1] ) {        //to avoid same process for same j value,it will shift to next ele other than j
                        j++;
                    }
                    while (j < k && arr[k] == arr[k + 1]) {          // to avoid same process for same k value,it will shift to next ele other than k 
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};