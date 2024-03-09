#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		stack<string> stk;
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '/'){
				s[i] = ' ';
			}
		}
		stringstream ss(s);
		string token;
		while(ss >> token){
			if(token == ".."){
				if(!stk.empty()){
					stk.pop();
				}
			}
			else{
				stk.push(token);
			}
		}
		string res = "";
		if(stk.empty()){
			res = "/" + res;
		}
		else{
			while(!stk.empty()){
				res = "/" + stk.top() + res;
				stk.pop();
			}
		}
		cout << res << endl;
	}
	return 0;
}