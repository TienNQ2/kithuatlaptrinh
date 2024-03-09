#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int dp[10005];
int count(int n){
    if(n == 1){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int x = count(n - 1) + 1;
    if(n % 2 == 0){
        x = min(x, count(n / 2) + 1);
    }
    if(n % 3 == 0){
        x = min(x, count(n / 3) + 1);
    }
    dp[n] = x;
    return x;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		memset(dp, -1, sizeof(dp));
		cout << count(n) << endl;
	}
	return 0;
}