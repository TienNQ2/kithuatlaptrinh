#include<bits/stdc++.h>
using namespace std;
long long soCatalan(int n){
    if(n==0)
        return 1;
    long long catalan[n+1];
    memset(catalan,0,sizeof(catalan));
    catalan[0]=1;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            catalan[i+1]+=catalan[j]*catalan[i-j];
        }
    }
    return catalan[n];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<soCatalan(n)<<endl;
    }
}