#include<bits/stdc++.h>

using namespace std;
using ll = long long;

string solve(string &s){
	stack<char> stk;
	for(char c : s){
		if(c != '#'){
			stk.push(c);
		}
		else if(c == '#' && !stk.empty()){
			stk.pop();
		}
	}
	string res = "";
	while(!stk.empty()){
		res = stk.top() + res;
		stk.pop();
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		string res1 = solve(s1);
		string res2 = solve(s2);
		if(res1 == res2){
			cout << "1\n";
		}
		else{
			cout << "0\n";
		}
	}
	return 0;
}