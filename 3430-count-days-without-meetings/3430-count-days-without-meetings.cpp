class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int cnt=0;
        int start=0;
        int end=0;

        sort(meetings.begin(), meetings.end());
         
        for(auto it:meetings){
            if(it[0]>end){
                cnt+= it[0]-end-1;
            }
            end=max(end,it[1]);
        }
        if(days>end){            //overlapping case
            cnt+=days-end;
        }
        return cnt;
    }
};