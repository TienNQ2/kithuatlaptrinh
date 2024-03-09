#include<bits/stdc++.h>
using namespace std;
long long check(int n,int m){
    long long dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    int i=1;
    while(pow(i,m)<=n){
    	int k =pow(i,m);
        for(int j=n;j>=k;j--){
            dp[j]+=dp[j-k];
        }
        i++;
    }
    return dp[n];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<check(n,m)<<endl;
    }
}