#include<bits/stdc++.h>
using namespace std;
long long nhanSo(long long a,long long b){
	return (a*b)%1000000007;
}
long long power(long long a, long long n){
	if(n==1)
	return a;
	if(n%2==0){
		long long half_power = power(a,n/2);
		return nhanSo(half_power,half_power);
	}
	if(n%2==1){
		long long half_power = power(a,n/2);
		long long result = nhanSo(half_power,half_power);
		return nhanSo(result,a);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,n;
		cin>>a>>n;
		if(n==0) cout<<1<<endl;
		else{
		cout<<power(a,n)<<endl;}
	}
}