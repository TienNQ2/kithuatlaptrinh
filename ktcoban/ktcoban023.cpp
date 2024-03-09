#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
	if(n==0|n==1)
	return false;
	if(n==2||n==3)
	return true;
	if(n%2==0|n%3==0)
		return false;
	for(long long i=5;i<=sqrt(n);i+=6){
		if(n%i==0||n%(i+2)==0)
			return false;
	}
	return true;
}

long long soMu(long long n,long long p){
	if(check(p)==true){
		long long dem = 0;
		long long i=p;
		while(n>=p){
			n=n/p;
			dem+=n;
		}
		return dem;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,p;
		cin>>n>>p;
		cout<<soMu(n,p)<<endl;
	}
}