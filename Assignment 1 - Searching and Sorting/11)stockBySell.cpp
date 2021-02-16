#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxProfit(const vector<int>& v){
  if(v.size() == 0) return 0;
  int minP = v[0], maxP = 0, cost = 0;
  for(int i = 0; i < v.size(); i++){
    minP = min(minP, v[i]);
    cost = v[i] - minP;
    maxP = max(maxP, cost);
  }
  return maxP;
}

int main(){
  vector<int> v = {7, 1, 5, 3, 6, 4};
  int result = maxProfit(v);
  cout << result << '\n';
  return 0;
}
