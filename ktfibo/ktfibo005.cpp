#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0||n==1)
        return 1;
    long long f0=1;
    long long f1=1;
    for(long long i=2;i<=n;i++){
        long long fibo = f1;
        f1=f0+f1;
        f0=fibo;
    }
    return f1;
}
long long bds(int n){
    long long dp[n+1];
    memset(dp,0,sizeof(dp));
        
    dp[0]=1;
    int i=1;
    int fibo = fib(i);
    while(fibo<=n){
        for(int j=n;j>=fibo;j--){
            dp[j]+=dp[j-fibo];
        }
        i++;
        fibo=fib(i);
    }
    return dp[n];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<bds(n)<<endl;
    }
}