#include<bits/stdc++.h>

using namespace std;
using ll = long long;

string solve(string &s){
	string res = "";
	stack<int> num;
	stack<string> tmp;
	int n = 0;
	for(char c : s){
		if(isdigit(c)){
			n = n * 10 + (c - '0');
		}
		else if(c == '['){
			num.push(n);
			n = 0;
			tmp.push(res);
			res = "";
		}
		else if(c == ']'){
			int k = num.top();
			num.pop();
			string prev = tmp.top();
			tmp.pop();
			for(int i = 0; i < k; i++){
				prev += res;
			}
			res = prev;
		}
		else{
			res += c;
		}
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}
}