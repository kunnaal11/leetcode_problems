class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        int i=0,j=n-1;
        sort(tokens.begin(),tokens.end());
        
        int maxScore=0;
        int score=0;
        while (i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                score++;
                i++;
                maxScore=max(maxScore,score);
             }
             else if(score>0){
               power+=tokens[j];
               score-=1;
                j--;
            }
            else{
                return maxScore;
            }
        }
        return maxScore;
    }
};