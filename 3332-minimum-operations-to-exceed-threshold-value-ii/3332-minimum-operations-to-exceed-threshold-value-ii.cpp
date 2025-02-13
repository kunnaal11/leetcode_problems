class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt = 0;
        priority_queue<long, vector<long>, greater<long>> pq (begin(nums),end(nums));
        
        while (pq.top() < k && !pq.empty()){
            long ele1=pq.top();
            pq.pop();

            long ele2=pq.top();
            pq.pop();

            pq.push(min(ele1,ele2)*2+max(ele1,ele2));
            cnt++;
        }
            return cnt;
    }
};