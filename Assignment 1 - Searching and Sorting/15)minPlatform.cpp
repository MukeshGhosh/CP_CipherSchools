#include <bits/stdc++.h>
using namespace std;
#define ll long long

int minPlat(vector<int> arr, vector<int> dept){
  sort(arr.begin(), arr.end());
  sort(dept.begin(), dept.end());
  int plat = 1, ans = 1, i = 1, j = 0;
  while(i < arr.size() && j < arr.size()){
    if(arr[i] <= dept[j]){
      plat += 1;
      i += 1;
    }
    else if(arr[i] > dept[j]){
      plat -= 1;
      j += 1;
    }
    if(plat > ans) ans = plat;
  }
  return ans;
}

int main(){
  vector<int> arrival = {900, 940, 950, 1100, 1500, 1800};
  vector<int> departure = {910, 1200, 1120, 1130, 1900, 2000};
  cout << minPlat(arrival, departure);
  return 0;
}
