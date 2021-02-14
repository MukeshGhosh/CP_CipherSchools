#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printSpiralMatrix(int mat[4][6], int row, int col){
  if(row == 0 || col == 0) return;
  int rowS = 0, colS = 0, i, totalElements = row * col, count = 0;
  while(count < totalElements){
    for(i = colS; count < totalElements && i < col; ++i){
      cout << mat[rowS][i] << " ";
      count += 1;
    }
    rowS += 1;
    for(i = rowS; count < totalElements && i < row; ++i){
      cout << mat[i][col - 1] << " ";
      count += 1;
    }
    col -= 1;
    for(i = col - 1; count < totalElements && i >= colS; --i){
      cout << mat[row - 1][i] << " ";
      count += 1;
    }
    row -= 1;
    for(i = row - 1; count < totalElements && i >= rowS; --i){
      cout << mat[i][colS] << " ";
      count += 1;
    }
    colS += 1;
  }
}

int main(){
  int matrix[4][6] = {{1, 2, 3, 4, 5, 6},
                      {7, 8, 9, 10, 11, 12},
                      {19, 20, 21, 22, 23, 24},
                      {13, 14, 15, 16, 17, 18}};
  printSpiralMatrix(matrix, 4, 6);
  cout << '\n';
  return 0;
}
