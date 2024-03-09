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
			if(!stk.empty() && c == ')' && stk.top() == '('){
				stk.pop();
			}
			else{
				stk.push(c);
			}
		}
		cout << stk.size() << endl;
	}
	return 0;
}