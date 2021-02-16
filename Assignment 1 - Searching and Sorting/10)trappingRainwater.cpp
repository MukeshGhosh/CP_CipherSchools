// Link: https://www.geeksforgeeks.org/trapping-rain-water/

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int maxWater(vector<int> v){
  int lm = 0, rm = 0, start = 0, end = v.size()-1;
  int count = 0;
  while(start <= end){
    if(v[start] < v[end]){
      if(v[start] > lm) lm = v[start];
      else count += lm - v[start];
      start += 1;
    }
    else{
      if(v[end] > rm) rm = v[end];
      else count += rm - v[end];
      end -= 1;
    }
  }
  return count;
}

int main(){
  vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  int result = maxWater(v);
  cout << result << '\n';
  return 0;
}
