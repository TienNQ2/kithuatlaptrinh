#include<bits/stdc++.h>
using namespace std;
long long bds01(int n){
    long long dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=n-1;i++){
        for(int j=i;j<=n;j++){
            dp[j]=(dp[j]+dp[j-i]);
            dp[j]=dp[j]%1000000007;
        }
    }
    return dp[n];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
            cin>>n;
        cout<<bds01(n)<<endl;
    }
}