#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  vector<int> v = {1, 6, 9, 4, 3, 7, 8, 2};
  sort(v.begin(), v.end());
  int start = 0, end = v.size()-1;
  while(start < end){
    cout << v[end] << " ";
    cout << v[start] << " ";
    start += 1;
    end -= 1;
  }
  if(v.size() % 2 != 0){
    cout << v[v.size()/2] << " ";
  }
  cout << '\n';
  return 0;
}
