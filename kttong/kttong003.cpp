#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dp[105][105], a[105][105];
int main(){
	int t;
	cin >> t;
  	while(t--){
  		int m, n;
    	cin >> m >> n;
    	for(int i = 1; i <= m; i++){
    		for(int j = 1; j <= n; j++){
    			cin >> a[i][j];
			}
		}
		for(int i = 1; i <= n; i++){
			dp[0][i] = -INT_MAX;
			dp[m + 1][i] = -INT_MAX;
		}
		for(int i = 1; i <= m; i++){
			dp[i][1] = a[i][1];
		}
		for(int j = 2; j <= n; j++){
			for(int i = 1; i <= m; i++){
				dp[i][j] = max({dp[i - 1][j - 1], dp[i][j - 1], dp[i + 1][j - 1]}) + a[i][j];
			}
		}
		int ans = -INT_MAX;
		for(int i = 1; i <= m; i++){
			ans = max(ans, dp[i][n]);
		}
		cout << ans << endl;
	}
	return 0;
}