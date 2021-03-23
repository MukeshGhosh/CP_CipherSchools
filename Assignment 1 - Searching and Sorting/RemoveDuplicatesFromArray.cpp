#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> removeD(int arr[], int n){
  vector<int> v;
  int c = arr[0];
  v.push_back(c);
  for(int i = 1; i < n; i++){
    if(arr[i] != c){
      v.push_back(arr[i]);
      c = arr[i];
    }
  }
  return v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    vector<int> v = removeD(arr, n);
    for(int i = 0; i < v.size(); i++){
      cout << v[i] << " ";
    }
    return 0;
}
