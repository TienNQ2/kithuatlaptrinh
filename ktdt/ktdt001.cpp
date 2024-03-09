#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
	    cin >> n;
	    ll max = (ll)(sqrt(n * 8 + 1) + 1) / 2;
	    ll dem = 0;
	    for(ll i = 2; i <= max - 1; i++){
	        if((n - i * (i - 1) / 2) % i == 0){
	            ll a = (n - i * (i - 1) / 2) / i;
	            dem++;
	        }
	    }
		cout << dem << endl;
	}
    return 0;
}