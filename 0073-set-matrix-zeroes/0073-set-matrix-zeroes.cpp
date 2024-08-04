// 2nd meathod, better than brute force
// algo: we will create a row and col array and update its element as we get any 0s in our matrix

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n,1);
        vector<int> col(m,1);

    // marking our row and col array
        for(int i=0; i<n; i++){
            for(int j=0; j<m ; j++){
                if(matrix[i][j]==0){
                    row[i]=0; 
                    col[j]=0;
                }
            }
        }
    // setting required rows and col to 0s
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(row[i]==0 || col[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};