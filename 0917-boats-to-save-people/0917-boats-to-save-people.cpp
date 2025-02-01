class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(begin(people), end(people));
        int cnt = 0;
        int i = 0, j = people.size() - 1;
        while (i <= j) {
            if (people[i] + people[j] <= limit) {     //if both are in limit cnt++;
                i++;
                j--;
            //cnt++;
            } 
            else {                                 //if its > limit then take big one j and cnt++;
                j--;
              //  cnt++;
            }

            cnt++;
        }
        return cnt;
    }
};