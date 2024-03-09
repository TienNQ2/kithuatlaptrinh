#include<bits/stdc++.h>
using namespace std;
long long demSo(int n,int m){
    long long dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    int i=0;
    int x = pow(m,i);
    while(x<=n){
        for(int j=x;j<=n;j++){
            dp[j]+=dp[j-x];
        }
        i++;
        x=pow(m,i);
    }
    return dp[n];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<demSo(n,m)<<endl;
    }
}