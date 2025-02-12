class Solution {
public:
    int check(int n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;              //(sum,first_indx=val);
        int maxi = -1;
        int sum = 0;
        for (int i=0;i<n;i++) {
            int curr = check(nums[i]);

            if (mp.find(curr)!=mp.end()) {
                int ind1 = mp[curr];
                int ind2 = nums[i];

                maxi=max(maxi, ind1+ind2);          // Update max sum
                mp[curr] = max(ind1, ind2);         // Store the max of the two
            } else { 
                mp[curr]=nums[i];
            }
           
        }
        return (maxi == 0) ? -1 : maxi;
    }
};