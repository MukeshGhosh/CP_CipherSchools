#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sort_012(vector<int>& v){
  int i = 0, nextZero = 0, nextTwo = v.size()-1;
  while(i <= nextTwo){
    if(v[i] == 0){
      swap(v[i], v[nextZero]);
      i += 1;
      nextZero += 1;
    }
    else if(v[i] == 2){
      swap(v[i], v[nextTwo]);
      nextTwo -= 1;
    }
    else i += 1;
  }
}

int main(){
  vector<int> v = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
  sort_012(v);
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
  cout << '\n';
  return 0;
}
