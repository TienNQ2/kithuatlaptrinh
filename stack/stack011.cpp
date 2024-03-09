#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> stk;
		for(char c : s){
			if(c == ')'){
				string tmp = "";
				while(!stk.empty() && stk.top() != '('){
					tmp += stk.top();
					stk.pop();
				}
				stk.pop();
				for(char x : tmp){
					stk.push(x);
				}
			}
			else{
				stk.push(c);
			}
		}
		string res = "";
		while(!stk.empty()){
			res = stk.top() + res;
			stk.pop();
		}
		cout << res << endl;
	}
	return 0;
}