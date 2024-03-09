#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll powMOD(ll a, ll b){
	ll res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %= MOD;
		}
		a *= a;
		a %= MOD;
		b /= 2;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll tmp = n / 2;
		if(n % 2 == 1){
			ll res = powMOD(5, tmp + 1) * powMOD(4, tmp);
			res %= MOD;
			cout << res << endl; 
		}
		else{
			ll res = powMOD(5, tmp) * powMOD(4, tmp);
			res %= MOD;
			cout << res << endl;
		}
	}
	return 0;
}