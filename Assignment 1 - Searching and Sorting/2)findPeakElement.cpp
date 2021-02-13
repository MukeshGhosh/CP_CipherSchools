#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findPeak(const vector<int>& v, int start, int end, int n){
  int mid = start + (end - start)/2;
  if((mid == 0 || v[mid - 1] <= v[mid]) && (mid == n-1 || v[mid + 1] <= v[mid])){
    return v[mid];
  }
  else if(mid > 0 && v[mid - 1] >= v[mid]){
    return findPeak(v, start, mid - 1, n);
  }
  else{
    return findPeak(v, mid + 1, end, n);
  }
}


int main(){
  vector<int> v = {1, 3, 20, 4, 1, 0};
  int peakElement = findPeak(v, 0, v.size()-1, v.size());
  cout << peakElement << '\n';
  return 0;
}
