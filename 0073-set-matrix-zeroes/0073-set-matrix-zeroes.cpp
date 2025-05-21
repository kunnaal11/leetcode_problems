class Solution {  
private:  // m2 here -999888 used just for unique numbbber,I used -1 but some test cases contain it
    void setRow(vector<vector<int>>& matrix,int m,int n, int i){
        for(int k=0;k<n;k++){
            if(matrix[i][k]!=0){
                matrix[i][k]=-999988;
            }
        }
    }
    
    void setCol(vector<vector<int>>& matrix,int m,int n, int j){
        for(int k=0;k<m;k++){
            if(matrix[k][j]!=0){
                matrix[k][j]=-999988;
            }
        }
    }
    
    void setAns(vector<vector<int>>& matrix,int m,int n){
         
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == -999988){
                    matrix[i][j]=0;
                }
                
            }
        }
    }
    
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n= matrix[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                setRow(matrix,m,n,i);
                setCol(matrix,m,n,j);
                }
            }
        }
        return setAns(matrix,m,n);
       
    }
};   