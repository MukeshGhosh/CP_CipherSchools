#include <bits/stdc++.h>
using namespace std;
#define ll long long

int arr[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int nonZeroDigit(int n){
  if(n < 10) return arr[n];
  if(((n/10) % 10) % 2 == 0){
    return (6 * nonZeroDigit(n/5) * arr[n % 10]) % 10;
  }
  else{
    return (4 * nonZeroDigit(n/5) * arr[n % 10]) % 10;
  }
}

int main(){
  int n = 14;
  cout << nonZeroDigit(n) << '\n';
  return 0;
}
