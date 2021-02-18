#include <bits/stdc++.h>
using namespace std;
#define ll long long

void combHelper(vector<vector<int>>& v, vector<int>& temp, int n, int c, int k){
  if(k == 0){
    v.push_back(temp);
    return;
  }
  for(int i = c; i <= n; i++){
		temp.push_back(i);
		combHelper(v, temp, n, i+1, k-1);
		temp.pop_back();
	}
}

vector<vector<int>> numComb(int n, int k){
  vector<vector<int>> v;
  vector<int> temp;
  combHelper(v, temp, n, 1, k);
  return v;
}

int main(){
  int n = 5, k = 3;
  vector<vector<int>> v = numComb(n,k);
  for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < v[i].size(); j++){
      cout << v[i][j] << " ";
    }
    cout << '\n';
  }
  return 0;
}
