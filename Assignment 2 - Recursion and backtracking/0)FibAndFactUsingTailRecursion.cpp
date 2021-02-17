#include <bits/stdc++.h>
using namespace std;
#define ll long long

int factHelper(int n, int ans){
  if(n == 0){
    return ans;
  }
  int output = ans * n;
  return factHelper(n-1, output);
}

int fact(int n){
  return factHelper(n, 1);
}

int fibo(int n, int a = 0, int b = 1){
  if(n == 0) return a;
  if(n == 1) return b;
  return fibo(n-1, b, a+b);
}

int main(){
  int factorial = fact(5);
  cout << factorial << '\n';
  int fibonacci = fibo(9);
  cout << fibonacci << '\n';
  return 0;
}
