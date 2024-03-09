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
			if(!stk.empty() && abs(c - stk.top()) == 32){
				stk.pop();
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