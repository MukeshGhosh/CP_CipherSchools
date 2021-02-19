#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isValid(string str){
  if(str.size() > 1 && str[0] == '0') return false;
  if(stoi(str) <= 255 && stoi(str) >= 0) return true;
  return false;
}

vector<string> restoreIpAddresses(string str){
  vector<string> res;
  if(str.size() > 12 || str.size() < 4){
    return res;
  }
  for(int i = 1; i < 4; i++){
    string first = str.substr(0, i);
    if(!isValid(first)) continue;
    for(int j = 1; i + j < str.size() && j < 4; j++){
      string second = str.substr(i, j);
      if(!isValid(second)) continue;
      for(int k = 1; i + j + k < str.size() && k < 4; k++){
        string third = str.substr(i + j, k);
        string fourth = str.substr(i + j + k);
        if(isValid(third) && isValid(fourth)){
          string current = first + "." + second + "." + third + "." + fourth;
          res.push_back(current);
        }
      }
    }
  }
  return res;
}

int main(){
  string str = "25525511135";
	vector<string> v = restoreIpAddresses(str);
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
  cout << '\n';
  return 0;
}
