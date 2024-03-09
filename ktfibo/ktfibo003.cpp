#include<bits/stdc++.h>
using namespace std;
long long fib(long long n){
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
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<=3)
        cout<<4<<endl;
        else{
        long long i=1;
        long long fibo =fib(i);
        while(fibo<n){
            i++;
            fibo=fib(i);
        }
        if(fibo-1>n)
            cout<<n+1<<endl;
        else if(fibo-1==n)
            cout<<n+2<<endl;
        else if(fibo==n)
        cout<<n+1<<endl;
    }}
}