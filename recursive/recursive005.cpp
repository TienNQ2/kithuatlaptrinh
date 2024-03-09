#include<bits/stdc++.h>

using namespace std;
using ll = long long;

double myPow(double x, int n){
	if(n == 1){
		return x;
	}
	return x * myPow(x, n - 1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		double x;
		int n;
		cin >> x >> n;
		if(n > 0){
			cout << myPow(x, n) << endl;
		}
		else{
			int k = abs(n);
			cout << fixed << setprecision(2) << 1 / myPow(x, k) << endl;
		}
	}
	return 0;
}