#include <bits/stdc++.h>
using namespace std;
#define ll long long

string numberToTitle(int n){
  int i = 0, arr[10000];
  string str = "";
  while(n){
    arr[i] = n % 26;
    n /= 26;
    i += 1;
  }
  for(int j = 0; j < i - 1; j++){
    if(arr[j] <= 0){
      arr[j] += 26;
      arr[j+1] -= 1;
    }
  }
  for(int j = i; j >= 0; j--){
    if(arr[j] > 0){
      str += (char)('A' + arr[j] - 1);
    }
  }
  return str;
}

int main(){
  int n = 51;
  cout << numberToTitle(n) << '\n';
  return 0;
}
