#include<bits/stdc++.h>
using namespace std;
vector<int> demChuSo(int n){
	vector<int> dp;
	int i=1;
	double tong = 0;
	while(int(tong)<=n-1){
		tong+=log10(i);
		if(int(tong)==n-1){
			dp.push_back(i);
		}
		i++;
	}
	return dp;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a = demChuSo(n);
		if(a.size()==0) cout<<"NO"<<endl;
		else{
		cout<<a.size()<<" ";
		for(int x:a) cout<<x<<" ";
		cout<<endl;}
	}
}