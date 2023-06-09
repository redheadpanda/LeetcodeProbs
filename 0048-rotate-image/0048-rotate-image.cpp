// another 2d matrix can be declared and then last column
//of new matrix will be allotted the first row of original matrix

//space complexity- O(n*n)
//and in question it's asked to not declare another array

//another approach - transpose( swap), then reverse each row

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int n = matrix.size();
        
      //transpose
      for(int i =0;i<n;i++)
      {
          for(int j =0;j<i;j++)
          {
              swap(matrix[i][j], matrix[j][i]);
          }
      }
        
      //reverse the rows
        
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<n/2;j++)
            {
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
    }
};