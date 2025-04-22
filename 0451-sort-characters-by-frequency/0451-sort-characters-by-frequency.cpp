class Solution {
public: 
   static bool compare(pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;                   // sort by frequency (high to low)
}
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

        sort(pp.begin(), pp.end(), compare);    // use the function to sort

        string ans = "";
        for (int i = 0; i < pp.size(); i++) {
            while (pp[i].second > 0) {
                ans += pp[i].first;
                pp[i].second--;
            }
        }

        return ans;
    }
};
