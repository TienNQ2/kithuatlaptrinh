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
		int ok = 1;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == 'c'){
				if(stk.empty() || stk.top() != 'b'){
					ok = 0;
					break;
				}
				else{
					stk.pop();
				}
				if(stk.empty() || stk.top() != 'a'){
					ok = 0;
					break;
				}
				else{
					stk.pop();	
				}
			}
			else{
				stk.push(s[i]);
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