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
		f0 = fibo;
	}
	return f1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long i=3,nonFibo;
		long long fibo1 = fib(i),fibo2=fib(i+1);
		while(fibo2-fibo1-1<n){
			i++;
			n=n-(fibo2-fibo1-1);
			fibo2=fib(i+1);
			fibo1=fib(i);
		}
		nonFibo = fibo1+n;
		cout<<nonFibo<<endl;
	}
}