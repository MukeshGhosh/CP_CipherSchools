#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countTrailing(int n){
  int cnt = 0;
  for(int i = 5; n / i >= 1; i *= 5){
    cnt += n / i;
  }
  return cnt;
}

int main(){
  int n = 100;
  cout << countTrailing(n) << '\n';
  return 0;
}
