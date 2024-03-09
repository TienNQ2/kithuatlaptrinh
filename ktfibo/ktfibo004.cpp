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
bool check(long long n){
    long long i=1;
    long long fibo = fib(i);
    while(fibo<n){
        i++;
        fibo = fib(i);
    }
    if(fibo==n)
        return true;
    else
        return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(check(n))
            cout<<0<<" "<<n<<endl;
        else{
            long long i=1;
            long long fibo =fib(i);
            int xet =0;
            while(n>fibo){
                if(check(n-fibo)){
                    xet=1;
                    break;
                }
                i++;
                fibo=fib(i);
            }
            if(xet==1)
                cout<<fibo<<" "<<n-fibo<<endl;
            if(xet==0)
                cout<<-1<<endl;
        }
    }
}