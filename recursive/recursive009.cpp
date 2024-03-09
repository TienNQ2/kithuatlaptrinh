#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll fb[100];
void fibonacci(){
	fb[0] = 0;
	fb[1] = 1;
	for(int i = 2; i <= 92; i++){
		fb[i] = fb[i - 2] + fb[i - 1];
	}
}

int main(){
	fibonacci();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << fb[n] << endl;
	}
	return 0;
}