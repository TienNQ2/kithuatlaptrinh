#include <iostream>
#include <vector>
using namespace std;

int xauMeChungNganNhat(string A, string B) {
    int m = A.length();
    int n = B.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (A[i - 1] == B[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    	string A,B;
    	cin>>A>>B;
    int result = xauMeChungNganNhat(A, B);
    cout << result << endl;}
    return 0;
}