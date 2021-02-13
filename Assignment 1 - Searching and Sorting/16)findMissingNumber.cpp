#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> v = {1, 2, 4, 6, 3, 7, 9, 5};
  int xor1 = v[0];
  for(int i = 1; i < v.size(); i++){
    xor1 ^= v[i];
  }
  int xor2 = 1;
  for(int i = 2; i <= v.size()+1; i++){
    xor2 ^= i;
  }
  int xor3 = xor1 ^ xor2;
  cout << xor3 << '\n';
  return 0;
}
