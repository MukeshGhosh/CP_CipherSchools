// Link: https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findSum(const vector<int>& v){
  int maxSum = v[0], currSum = v[0];
  for(int i = 1; i < v.size(); i++){
    currSum = max(currSum + v[i], v[i]);
    maxSum = max(maxSum, currSum);
  }
  return maxSum;
}

int main(){

  vector<int> v = {-2, -3, 4, -1, -2, 1, 5, -3};
  cout << findSum(v) << '\n';
  return 0;
}
