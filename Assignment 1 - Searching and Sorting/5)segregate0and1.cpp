#include <bits/stdc++.h>
using namespace std;
#define ll long long

void segregate(vector<int>& v){
  int index = 0;
  for(int i = 0; i < v.size(); i++){
    if(v[i] == 0){
      swap(v[i], v[index]);
      index += 1;
    }
  }
}

int main(){
  vector<int> v = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0};
  segregate(v);
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
  cout << '\n';
  return 0;
}
