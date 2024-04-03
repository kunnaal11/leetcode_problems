class Solution {
private:
    bool check(int n,int m,int i,int j,vector<vector<char>>& board, string& word ,int k){
        if(k>=word.size()) return true;  //base condn;
        
        if(i<0 || j<0 || i>=n || j>=m || board[i][j]!=word[k])
            return false;     //invalid cases
        char temp=board[i][j];
        board[i][j]='*';
        bool op1=check(n,m,i+1,j,board,word,k+1);
        bool op2=check(n,m,i-1,j,board,word,k+1);
        bool op3=check(n,m,i,j+1,board,word,k+1);
        bool op4=check(n,m,i,j-1,board,word,k+1);
        board[i][j]=temp;      //backtracking
        return (op1 || op2 || op3 || op4);
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
         int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(check(n,m,i,j,board,word,0))
                    return true;
            }
        }
        return false;
    }
};
//so we will go in all 4 directiom <-, up,down,->