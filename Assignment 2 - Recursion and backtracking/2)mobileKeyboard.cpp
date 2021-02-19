#include <bits/stdc++.h>
using namespace std;
#define ll long long

string keypad[] = {" ", " ", "abc", "def", "ghi", "jkl", "mnop", "qrs", "tuv", "wxyz"};

void printHelper(string str, vector<string>& v, int index, string res){
	if(index == str.size()){
		v.push_back(res);
		return;
	}
	string p = keypad[str[index] - '0'];
	for(int i = 0; i < p.size(); i++){
		res += p[i];
		printHelper(str, v, index + 1, res);
		res.pop_back();
	}
}

vector<string> printCombinations(string str){
	vector<string> ans;
	printHelper(str, ans, 0, " ");
	return ans;
}

int main(){
  vector<string> v = printCombinations("234");
	for(string str : v){
		cout << str << '\n';
	}
  return 0;
}
