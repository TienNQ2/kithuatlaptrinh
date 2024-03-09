#include<bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(ll num){
	if(num == 1){
		return true;
	}
	if(num < 1 || num % 4 != 0){
		return false;
	}
	return check(num / 4);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(check(n)) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}