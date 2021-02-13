#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPeopleMeet(int x1, int v1, int x2, int v2){
  if((x1 > x2 && v1 >= v2) || (x1 < x2 && v1 <= v2)){
    return false;
  }
  return ((abs)(x1 - x2) % (abs)(v1 - v2) == 0);
}

int main(){
  int x1 = 10, v1 = 10, x2 = 25, v2 = 8;
  if(isPeopleMeet(x1, v1, x2, v2)){
    cout << "Yes" << '\n';
  }
  else{
    cout << "No" << '\n';
  }
  return 0;
}
