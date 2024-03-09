#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
int dp[MAXN];

int longestIncreasingSubsequence(int a[], int n) {
    int res = 1;
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        res = max(res, dp[i]);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[MAXN];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = longestIncreasingSubsequence(a, n);
        cout << ans << endl;
    }
    return 0;
}
