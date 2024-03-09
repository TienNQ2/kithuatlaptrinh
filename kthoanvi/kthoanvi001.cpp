#include <bits/stdc++.h>
using namespace std;
bool dp[16];
int n,X[16];
void input(){
    cin>>n;
    memset(dp,0,sizeof(dp));
}
void output(){
    for(int i=1;i<=n;i++){
        if(i<n)
            cout<<X[i]<<" ";
        else
            cout<<X[i]<<endl;
    }
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(dp[j]==0){
            dp[j]=1;
            X[i]=j;
            if(i==n) output();
            else Try(i+1);
            dp[j] = 0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        input();
        Try(1);
    }
}