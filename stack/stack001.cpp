#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		int ok = 1;
		string s;
		cin >> s;
		stack<char> stk;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
				stk.push(s[i]);
			}
			else if(s[i] == ')'){
				if(!stk.empty() && stk.top() == '('){
					stk.pop();
				}
				else{
					ok = 0;
					break;
				}
			}
			else if(s[i] == ']'){
				if(!stk.empty() && stk.top() == '['){
					stk.pop();
				}
				else{
					ok = 0;
					break;
				}
			}
			else{
				if(!stk.empty() && stk.top() == '{'){
					stk.pop();
				}
				else{
					ok = 0;
					break;
				}
			}
		}
		if(!stk.empty()){
			ok = 0;
		}
		if(ok) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}