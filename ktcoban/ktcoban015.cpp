#include<bits/stdc++.h>
using namespace std;
long long n,k,X[100];
bool dp[100];
long long giaiThua(int n){
	if(n==0)
	return 1;
	return n*giaiThua(n-1);
}
void input(){
	cin>>n>>k;
	memset(dp,0,sizeof(dp));
}
void output(){
	cout<<"[";
	for(int i=1;i<=k;i++){
		if(i<k)
		cout<<X[i]<<" ";
		else
		cout<<X[i];}
		cout<<"]"<<endl;
}
void Try(int i){
	for( int j = X[i - 1] + 1; j <= n - k + i; j++){
		if(dp[j]==0){
			dp[j]=1;
			X[i]=j;
			if(i==k) 
                output();
			else 
                Try(i+1);
			dp[j]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		input();
		long long count = giaiThua(n)/(giaiThua(n-k)*giaiThua(k));
		cout<<count<<endl;
		Try(1);
	}
}