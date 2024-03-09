#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		queue<char> q;
		for(int i=s.size()-1;i>=0;i--){
			q.push(s[i]);
		}
		while(!q.empty()){
			cout<<q.front();
			q.pop();
		}
		cout<<endl;
	}
}