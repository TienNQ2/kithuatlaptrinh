#include<bits/stdc++.h>
using namespace std;
vector<vector<long long> > mul_matrix(vector<vector<long long> > a, vector<vector<long long> >b){
	vector<vector<long long> > c(2,vector<long long>(2,0));
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];
				c[i][j]=(c[i][j])%1000000007;
			}
		}
	} 
	return c;
}
vector<vector<long long> > matrix_power(vector<vector<long long> > a,int n){
	if(n==1)
	return a;
	if(n%2==0){
		vector<vector<long long> > half_power = matrix_power(a,n/2);
		return mul_matrix(half_power,half_power);
	}
	else{
		vector<vector<long long> > half_power = matrix_power(a,n/2);
		vector<vector<long long> > result = mul_matrix(half_power,half_power);
		return mul_matrix(result,a);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<long long> > a(2,vector<long long>(2,0));
		a[0][0]=1;
		a[0][1]=1;
		a[1][0]=1;
		a[1][1]=0;
		vector<vector<long long> > c=matrix_power(a,n);
		cout<<c[0][0]<<endl;
	}
}