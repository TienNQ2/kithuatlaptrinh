#include <bits/stdc++.h>
using namespace std;
long long sangnto(int n) {
    vector<int> primes(n+1);
	long long sum =0;
    primes[0] = primes[1] = 0;
    for (int i = 2; i <=n; ++i) {
        primes[i] = i;
    }
    for (int i = 2; i<=n; ++i) {
        if (primes[i] == i) {
            for (int j = i+i; j<=n ; j += i) {
                    primes[j] = i;
                }
            }
        }
    for(int i=2;i<=n;i++){
    	sum+=primes[i];
	}
	return sum;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout<<sangnto(n)<<endl;
    }
}