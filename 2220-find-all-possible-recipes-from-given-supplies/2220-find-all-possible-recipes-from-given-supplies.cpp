class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes,vector<vector<string>>& ingredients,vector<string>& supplies) {
        int n = recipes.size();
        unordered_set<string> st(begin(supplies), end(supplies));

        int cnt = n;
        vector<string> ans;
        vector<bool> cooked(n, false);

        while (cnt--) {
            for (int i = 0; i < n; i++) {
                if (cooked[i]){
                    continue;
                 }
           
                bool flag = true;
                for (int j = 0; j < ingredients[i].size(); j++) {
                    if (!st.count(ingredients[i][j])) {
                        flag = false;
                        break;
                    }
                }

               if(flag) {
                st.insert(recipes[i]);
                ans.push_back(recipes[i]);
                cooked[i] = true;
              }
           }
        }
    return ans;
}
};
