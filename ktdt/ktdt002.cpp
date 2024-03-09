#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MAX = 50002;

vector<int> primes;
void sieve(){
	bool isPrime[MAX];
	memset(isPrime, true, sizeof(isPrime));
	for(int p = 2; p * p < MAX; p++){
		if (isPrime[p] == true){
			for (int i = p * 2; i < MAX; i += p)
				isPrime[i] = false;
		}
	}
	for (int p = 2; p < MAX; p++)
		if (isPrime[p])
			primes.push_back(p);
}

ll power(ll x, ll y){
	ll count = 0;
	ll z = y;
	while (x >= z){
		count += (x / z);
		z *= y;
	}
	return count;
}

ll mul(ll a, ll b, ll mod){
	ll res = 0;
	a = a % mod;
	while(b > 0){
		if(b % 2 == 1)
			res = (res + a) % mod;
		a = (a * 2) % mod;
		b /= 2;
	}
	return res % mod;
}

ll countWays(ll n, ll m){
	ll ans = 1;
	for (int i = 1; i < primes.size(); i++){
		ll powers = power(n, primes[i]);
		if (powers == 0)
			break;
		ans = mul(ans, powers + 1, m) % m;
	}
	if(((ans - 1) % m) < 0)
		return (ans - 1 + m) % m;
	else
		return (ans - 1) % m;
}

int main(){
	sieve();
	int t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		cout << countWays(n, m) << endl;
	}
	return 0;
}