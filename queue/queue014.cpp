#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int check(queue<char> &q1, queue<char> &q2){
	if(q1.size() != q2.size()){
		return 0;
	}
	while(!q1.empty()){
		if(q1.front() != q2.front()){
			return 0;
		}
		q1.pop();
		q2.pop();
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		queue<char> q1;
		queue<char> q2;
		for(char c : s1){
			q1.push(c);
		}
		for(char c : s2){
			q2.push(c);
		}
		cout << check(q1, q2) << endl;	
	}
	return 0;
}