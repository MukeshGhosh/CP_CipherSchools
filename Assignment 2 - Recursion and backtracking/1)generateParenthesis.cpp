#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printParenthesis(int pos, int n, int open, int close){
  static char str[100];
  if(close == n){
    cout << str << '\n';
    return;
  }
  else{
    if(open > close){
      str[pos] = '}';
      printParenthesis(pos+1, n, open, close+1);
    }
    if(n > open){
      str[pos] = '{';
      printParenthesis(pos+1, n, open+1, close);
    }
  }
}

int main(){
  int n = 3;
  if(n > 0){
    printParenthesis(0, n, 0, 0);
  }
  return 0;
}
