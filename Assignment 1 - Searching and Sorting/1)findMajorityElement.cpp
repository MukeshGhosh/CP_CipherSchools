#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findCand(const vector<int>& v, int n){
  int index = 0, count = 1;
  for(int i = 1; i < n; i++){
    if(v[index] == v[i]){
      count += 1;
    }
    else count -= 1;
    if(count == 0){
      index = i;
      count = 1;
    }
  }
  return v[index];
}

bool isMaj(const vector<int>& v, int candidate, int n){
  int count = 0;
  for(int i = 0; i < n; i++){
    if(v[i] == candidate){
      count += 1;
    }
  }
  if(count > n/2){
    return true;
  }
  return false;
}

int main(){
  vector<int> v = {3, 3, 4, 2, 4, 4, 2, 4, 4};
  int candidate = findCand(v, v.size());
  if(isMaj(v,candidate, v.size())){
    cout << candidate << '\n';
  }
  else{
    cout << "Majority element not found" << '\n';
  }
  return 0;
}
