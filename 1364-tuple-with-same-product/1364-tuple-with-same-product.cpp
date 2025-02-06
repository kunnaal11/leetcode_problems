class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int prod = nums[i] * nums[j];
                mp[prod]++;
            }
        }
        int ans = 0;
        for (auto it : mp) {
            int cnt = it.second;
            if (cnt > 1) {
                ans += cnt * (cnt - 1)*4;     //Comboination formula:Chosing 2 ele form cnt -->{ [cnt C2] *8 } ==cnt*(cnt-1)*4
            }
        }
        return ans ;
    }
};