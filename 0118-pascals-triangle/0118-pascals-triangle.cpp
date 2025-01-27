class Solution {
    vector<int> getrow(int& R) {        //function will give us the entre row array
        int ele = 1;
        vector<int> currRow;
        currRow.push_back(1);                   // first ele in subarr will be 1
        for (int i = 1; i < R; i++) {
            ele = ele * (R - i);            //this come form obs that this part is repeted (row-col)/col
            ele = ele / i;
            currRow.push_back(ele);
        }
        return currRow;
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {      //will pass one by one,to get all subarray of rows
            ans.push_back(getrow(i));    
        }

        return ans;
    }
};