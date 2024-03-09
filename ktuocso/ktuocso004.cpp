#include<bits/stdc++.h>
using namespace std;
// chi can bac cua so nguyen to >1 chac chan nho hon so ban dau
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long n,check=0;
		cin>>n;
		if(n>1000000000){
		long long k=sqrt(n),m=n;
		for(long long i=2;i*i*i<=m;i++){
			long long v=0;
			if(n%i==0){
				while(n%i==0){
					n/=i;
					v++;
				}
			}
			if(v>1){
				cout<<"YES"<<endl;
				check=1;
				break;
			}
		}
		if(check==0){
			if(k*k==m) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	else{
		long long k=sqrt(n),m=n;
		for(long long i=2;i<=k;i++){
			long long v=0;
			if(n%i==0){
				while(n%i==0){
					n/=i;
					v++;
				}
			}
			if(v>1){
				cout<<"YES"<<endl;
				check=1;
				break;
			}
		}
		if(check==0){
			if(k*k==m) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
}