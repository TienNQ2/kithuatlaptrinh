#include<bits/stdc++.h>
using namespace std;
bool doiXung(string s){
	queue<char> q;
	for(int i=0;i<s.size();i++){
		q.push(s[i]);
	}
	int dem=0;
	while(!q.empty()){
		if(q.front()!=s[s.size()-1-dem])
		return false;
		q.pop();
		dem++;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		if(doiXung(s)==true) cout<<1<<endl;
		else cout<<0<<endl;
	}
}