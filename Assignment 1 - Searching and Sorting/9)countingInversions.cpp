// Link: https://www.geeksforgeeks.org/counting-inversions/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int merge(vector<int> v, vector<int> temp, int start, int mid, int end){
  int i = start, j = mid, k = start, count = 0;
  while((i <= mid-1) && (j <= end)){
    if(v[i] <= v[j]) temp[k++] = v[i++];
    else{
      temp[k++] = v[j++];
      count += (mid-i);
    }
  }
  while(i <= (mid-1)) temp[k++] = v[i++];
  while(j <= end) temp[k++] = v[j++];
  for(i = start; i <= end; i++){
    v[i] = temp[i];
  }
  return count;
}

int mergeSort(vector<int> v, vector<int> temp, int start, int end){
  int count = 0, mid;
  if(start < end){
    mid = (start + end)/2;
    count += mergeSort(v, temp, start, mid);
    count += mergeSort(v, temp, mid+1, end);
    count += merge(v, temp, start, mid+1, end);
  }
  return count;
}

int main(){
  vector<int> v = {1, 20, 6, 4, 5};
  vector<int> temp(v.size());
  int result = mergeSort(v, temp, 0, v.size()-1);
  cout << result << '\n';
  return 0;
}
