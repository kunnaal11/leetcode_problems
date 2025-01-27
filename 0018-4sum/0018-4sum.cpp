class Solution {       //using sme logic as 3 pointers
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n = arr.size();

        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            if (i > 0 && arr[i] == arr[i - 1]) continue;                //to avoid taking same i again and again(dulicted)
            else {                                                        //else take all i values except those
                for (int j = i + 1; j < n; j++) {
                    if (j > i+1 && arr[j] == arr[j - 1]) continue;    //to avoid taking same j again and again(dulicted)
                    else {                                                 //else take all j values except those and which are >i+1

                        int k = j + 1;                                  //now apply 2-pointer betn [k,l]
                        int l = n - 1;
                        while (k < l) {
                            long long sum = arr[i] + arr[j];
                                      sum+= arr[k] + arr[l];        //did this to avoid Runtime error

                            if (sum > target) {
                                l--;
                            } else if (sum < target) {
                                k++;
                            } else { // sum==target achived!
                                vector<int> temp = {arr[i], arr[j], arr[k],arr[l]};
                                ans.push_back(temp);
                                k++;
                                l--;
                                while (k < l && arr[k] == arr[k - 1]) k++;
                                while (k < l && arr[l] == arr[l + 1]) l--;
                            }
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};