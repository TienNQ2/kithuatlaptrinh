#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll factorial(int n){
	if(n == 0){
		return 1;
	}
	return n * factorial(n - 1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << factorial(n) << endl;
	}
	return 0;
}