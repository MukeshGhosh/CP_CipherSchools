#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countPaths(int r, int c){
  if(r == 1 || c == 1) return 1;
  return countPaths(r-1, c) + countPaths(r, c-1);
}

int main(){
  int r = 4, c = 4;
  int count = countPaths(r, c);
  cout << count << '\n';
  return 0;
}
