#include <bits/stdc++.h>
using namespace std;
#define ll long long

void searchInMat(int matrix[4][4], int n, int num){
  if(n == 0) return;
  int small = matrix[0][0], large = matrix[n-1][n-1];
  if(num > large || num < small) {
    cout << "Element not found" << '\n';
    return;
  }
  int i = 0, j = n-1;
  while(i < n && j >= 0){
    if(matrix[i][j] == num){
      cout << "Element found in index: [" << i << "][" << j << "]" << '\n';
      return;
    }
    else if(num > matrix[i][j]){
      i += 1;
    }
    else j -= 1;
  }
  cout << "Element not found" << '\n';
}

int main(){

  int matrix[4][4] = {{10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
  searchInMat(matrix, 4, 39);
  return 0;
}
