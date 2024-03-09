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
		for(int i = 0; i < s.size(); i++){
			if(!stk.empty() && stk.top() == s[i]){
				stk.pop();
			}
			else{
				stk.push(s[i]);
			}
		}
		vector<char> v;
		while(!stk.empty()){
			char c = stk.top();
			v.push_back(c);
			stk.pop();
		}
		for(int i = v.size() - 1; i >= 0; i--){
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}