class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        vector<pair<char, int>> pp;
        for (auto it : mp) {
            pp.push_back({it.first, it.second});
        }

        sort(pp.begin(), pp.end(), [](pair<char,int>& a, pair<char,int>& b){
            return a.second > b.second;
        });

        string ans = "";
        for (int i = 0; i < pp.size(); i++) {
            while (pp[i].second-- > 0) {
                ans += pp[i].first;
            }
        }

        return ans;
    }
};
