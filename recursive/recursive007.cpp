#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void reverse_String(string &s, int l, int r){
	if(r < l){
		return;
	}
	else{
		cout << s[r];
		reverse_String(s, l, r - 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		reverse_String(s, 0, s.size() - 1);
		cout << endl;
	}
	return 0;
}