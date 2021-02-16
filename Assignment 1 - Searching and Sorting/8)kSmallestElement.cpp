#include <bits/stdc++.h>
using namespace std;
#define ll long long

void kSmallest(vector<int> v, int k){
  for(int i = k; i < v.size(); i++){
    int maxNum = v[k - 1];
    int index = k - 1;
    for(int j = k - 2; j >= 0; j--){
      if(maxNum < v[j]){
        maxNum = v[j];
        index = j;
      }
    }
    if(v[i] < maxNum){
      int j = index;
      while(j < k - 1){
        v[j] = v[j + 1];
        j += 1;
      }
      v[k - 1] = v[i];
    }
  }
  for(int i = 0; i < k; i++){
    cout << v[i] << " ";
  }
}


int main(){
  vector<int> v = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
  int k = 4;
  kSmallest(v, k);
  cout << '\n';
  return 0;
}
