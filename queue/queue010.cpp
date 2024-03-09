#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<int> v;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ','){
				s[i] = ' ';
			}
		}	
		stringstream ss(s);
		string token;
		while(ss >> token){
			int num = stoi(token);
			v.push_back(num);
		}
		queue<int> q;
		q.push(v[0]);
		for(int i = 1; i < v.size(); i++){
			if(!q.empty() && v[i] > q.front()){
				q.push(v[i]);
				q.pop();
			}
		}
		cout << q.front() << endl;
	}
	return 0;
}