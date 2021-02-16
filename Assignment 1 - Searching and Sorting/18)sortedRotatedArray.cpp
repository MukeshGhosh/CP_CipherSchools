#include <bits/stdc++.h>
using namespace std;
#define ll long long

int binarySearch(vector<int> v, int start, int end, int x){
  if(start > end) return -1;
  int mid = start + (end - start)/2;
  if(x == v[mid]) return mid;
  if(x > v[mid]) return binarySearch(v, mid+1, end, x);
  return binarySearch(v, start, mid-1, x);
}


int findPivot(vector<int> vec, int start, int end){
  if(end < start){
    return -1;
  }
  if(start == end){
    return start;
  }
  int mid = start + (end - start)/2;
  if(mid < end && vec[mid] >= vec[mid + 1]){
    return mid;
  }
  if(start < mid && vec[mid - 1] > vec[mid]){
    return mid - 1;
  }
  if(vec[start] <= vec[mid]){
    return findPivot(vec, mid+1, end);
  }
  else{
    return findPivot(vec, start, mid-1);
  }
}

int searchInSortedRotated(vector<int> v, int x){
  int i = 0, j = v.size() - 1;
  int pivotElement = findPivot(v, i, j);
  int res1 = binarySearch(v, i, pivotElement, x);
  int res2 = binarySearch(v , pivotElement+1, j, x);
  if(res1 < 0){
    return res2;
  }
  else{
    return res1;
  }
}

int main(){
  vector<int> v = {5, 6, 7, 8, 9, 10, 1, 2, 3};
  int x = 7;
  if(searchInSortedRotated(v, x) == -1){
    cout << "Index not found" << '\n';
  }
  else
    cout <<"Index: " << searchInSortedRotated(v, x) << '\n';
  return 0;
}
