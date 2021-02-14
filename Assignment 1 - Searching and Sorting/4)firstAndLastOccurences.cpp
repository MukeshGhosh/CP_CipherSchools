// Link: https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findFirstPos(const vector<int>& v, int x){
  int start = 0, end = v.size()-1, pos = -1;
  while(start <= end){
    int mid = start + (end - start)/2;
    if(x < v[mid]){
      end = mid - 1;
    }
    else if(x > v[mid]){
      start = mid + 1;
    }
    else{
      pos = mid;
      end = mid - 1;
    }
  }
  return pos;
}

int findLastPos(const vector<int>& v, int x){
  int start = 0, end = v.size()-1, pos = -1;
  while(start <= end){
    int mid = start + (end - start)/2;
    if(x < v[mid]){
      end = mid - 1;
    }
    else if(x > v[mid]){
      start = mid + 1;
    }
    else{
      pos = mid;
      start = mid + 1;
    }
  }
  return pos;
}

int main(){
  vector<int> v = {1, 3, 5, 5, 5, 5, 7, 123, 125};
  int x = 5;
  cout << "First Position: " << findFirstPos(v, x) << '\n';
  cout << "Last Position: " << findLastPos(v, x) << '\n';
  return 0;
}
