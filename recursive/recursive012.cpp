#include<bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPalindrome(string &s, int l, int r){
	if(l > r){
		return true;
	}
	if(s[l] != s[r]){
		return false;
	}
	isPalindrome(s, l + 1, r - 1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(isPalindrome(s, 0, s.size() - 1)){
			cout << "1\n";
		}
		else{
			cout << "0\n";
		}
	}
	return 0;
}