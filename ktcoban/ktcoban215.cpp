#include<bits/stdc++.h>
using namespace std;
string mul(string a,string b){
	int len1 = a.size();
	int len2 = b.size();
	if(len1==0||len2==0) return "0";
	string result(len1+len2,'0');
	for(int i=len1-1;i>=0;i--){
		int carry = 0;
		int digit1 = a[i]-'0';
		for(int j=len2-1;j>=0;j--){
			int digit2 = b[j]-'0';
			int sum = digit1*digit2+carry+(result[i+j+1]-'0');
			result[i+j+1] = sum%10+'0';
			carry = sum/10;
		}
		result[i] = (result[i]-'0'+carry)+'0';
	}
	result.erase(0,min(result.find_first_not_of('0'),result.size()-1));
	return result;
}
string giaiThua(int k,int n){
	string result = "1";
	for(int i=n-k+1;i<=n;i++){
		string m = to_string(i);
		result=mul(m,result);
	}
	return result;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
        if(n==0&&k==0) cout<<1<<endl;
        else
		cout<<giaiThua(k,n)<<endl;
	}
}