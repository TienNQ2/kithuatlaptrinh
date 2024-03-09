#include <bits/stdc++.h>
using namespace std;

// Returns length of maximum length subsequence
int findSubsequence(int arr[], int n)
{
	int len = 1;
	int tmp;

	int i, j, d;

	int dp[10];

	memset(dp, 0, sizeof(dp));

	int cnt[10];

	int locMax;

	tmp = arr[0];
	while (tmp > 0) {
		dp[tmp % 10] = 1;
		tmp /= 10;
	}

	for (i = 1; i < n; i++) {
		tmp = arr[i];
		locMax = 1;
		memset(cnt, 0, sizeof(cnt));

		while (tmp > 0) {
			cnt[tmp % 10] = 1;
			tmp /= 10;
		}

		for (d = 0; d <= 9; d++) {
			if (cnt[d]) {
				dp[d]++;
				locMax = max(locMax, dp[d]);
			}
		}

		for (d = 0; d <= 9; d++) {
			if (cnt[d]) {
				dp[d] = locMax;
			}
		}		

		len = max(len, locMax);
	}

	return len;
}

// Driver code
int main()
{
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 
	int N = sizeof(arr) / sizeof(arr[0]);

	cout << findSubsequence(arr, N)<<endl;

	}
	return 0;
}