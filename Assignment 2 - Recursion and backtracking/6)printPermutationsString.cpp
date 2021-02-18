#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printPermutation(string str, int start, int end){
  if(start == end){
    cout << str << '\n';
    return;
  }
  for(int i = start; i <= end; i++){
    swap(str[i], str[start]);
    printPermutation(str, start + 1, end);
    swap(str[i], str[start]);
  }
}

int main(){
  string str = "ABCD";
  printPermutation(str, 0, str.size()-1);
  return 0;
}
