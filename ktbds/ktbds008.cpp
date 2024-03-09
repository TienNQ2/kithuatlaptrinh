#include<bits/stdc++.h>
using namespace std;
long long nhanSo(long long a,long long b){
	return (a*b)%1000000007;
}
long long bds008(int k,int n){
	if(n==1)
		return 2;
	if(n%2==0){
		long long half_power = bds008(2,n/2);
		return nhanSo(half_power,half_power);
	}
	else{
		
		long long half_power = bds008(2,n/2);
		long long result = nhanSo(half_power,half_power);
		return nhanSo(result,2);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2==1)
		 cout<<-1<<endl;
		else{
			n=n/2;
			n=n-1;
			cout<<bds008(2,n)<<endl;
		}
	}
}