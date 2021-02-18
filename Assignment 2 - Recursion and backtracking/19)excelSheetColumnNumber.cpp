#include <bits/stdc++.h>
using namespace std;
#define ll long long

int titleToNumber(const string& s){
  int ans = 0;
  for(const auto& i : s){
    ans *= 26;
    ans += i - 'A' + 1;
  }
  return ans;
}

int main(){
  string str = "ZY";
  cout << titleToNumber(str) << '\n';
  return 0;
}
