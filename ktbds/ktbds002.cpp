#include<bits/stdc++.h>
using namespace std;
long long bds02(int n,int k){
    long long dp[n+1][k+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=k;i++)
        dp[0][i]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            for(int m=0;m<=j;m++){
                dp[i][j]+=dp[i-1][j-m];
            }
        }
    }
    return dp[n][k];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<bds02(n,k)<<endl;
    }
}