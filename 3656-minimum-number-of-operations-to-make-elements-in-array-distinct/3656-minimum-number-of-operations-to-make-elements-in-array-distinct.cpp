class Solution {
public:
    bool check(int start, vector<int>& nums,int n) { // fun: check form [start,n]->if there are distint if not then false
        vector<int> freq(101, 0);

        for (int i = start; i < n; i++) {
            freq[nums[i]]++;

            if (freq[nums[i]] > 1)
                return false;
        }

        return true;
    }

public:
    int minimumOperations(vector<int>& nums) {

        int n = nums.size(), cnt = 0, start = 0;

        while (start < n) {
            if (check(start, nums, n)) {      //if it finds distinct rem-arry then stop
                break;
            }
            else{
                cnt++;
                start += 3;
            }
        }
        return cnt;
    }
};