vector<vector<int>>pre_sum;//create a vector for prefix sum 

NumMatrix(vector<vector<int>>& mat) {
    
    int n = mat.size(), m = mat[0].size();//size of matrix n*m
    
    pre_sum.resize(n+1,vector<int>(m+1,0));//resize the prefix vector as size of matrix vector + 1 in row and column for handling base cases 
    //Also mark all elements as zero
    
    //store the prefix sum in vector pre_sum
    for(int i=1;i<=n;i++){ 
        for(int j=1;j<=m;j++){
            pre_sum[i][j]=pre_sum[i-1][j]+pre_sum[i][j-1]+mat[i-1][j-1]-pre_sum[i-1][j-1];
        }
    }
}

int sumRegion(int row1, int col1, int row2, int col2) {
    //Return the answer as given below
    row1++; col1++; row2++; col2++; // 1 indexing
    return pre_sum[row2][col2] - pre_sum[row2][col1 - 1]-pre_sum[row1 - 1][col2]+pre_sum[row1 - 1][col1 - 1];
}




class NumMatrix {
public:
    vector<vector<int>> m;
    NumMatrix(vector<vector<int>>& matrix) {
        m = matrix;
        // take a matrix and calculate matrix sum of size (0,0) -> (i,j) for Every i,j
        for(int i = 0; i < m.size(); i++)
        {
            for(int j = 0; j < m[0].size(); j++)
            {
                if(i > 0 && j > 0) m[i][j] += m[i][j-1] + m[i-1][j] - m[i-1][j-1];
                else if(i > 0) m[i][j] += m[i-1][j]; // first row sum
                else if(j > 0) m[i][j] += m[i][j-1]; // first col sum;
            }
        }
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
          if(row1-1 > -1 && col1-1 > -1)
            return m[row2][col2] - m[row1-1][col2] - m[row2][col1-1] + m[row1-1][col1-1];
        if(row1-1 > -1)
            return m[row2][col2] - m[row1-1][col2];
        if(col1-1 > -1)
            return m[row2][col2] - m[row2][col1-1];
        return m[row2][col2];
    }
};


// https://prnt.sc/wR_OQB1-zCkP