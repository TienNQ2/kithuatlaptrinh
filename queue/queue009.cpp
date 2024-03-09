#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s; int k;
		cin >> s >> k;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ','){
				s[i] = ' ';
			}
		}
		vector<string> v;
		stringstream ss(s);
		string token;
		while(ss >> token){
			v.push_back(token);
		}
		deque<string> dq;
		for(auto x : v){
			dq.push_back(x);
		}
		vector<string> tmp;
		int i = 1;
		while(i <= k){
			tmp.push_back(dq.front());
			dq.pop_front();
			i++;
		}
		for(int i = 0; i < tmp.size(); i++){
			dq.push_front(tmp[i]);
		}
		vector<string> res;
		while(!dq.empty()){
			res.push_back(dq.front());
			dq.pop_front();
		}
		for(int i = 0; i < res.size(); i++){
			cout << res[i];
			if(i != res.size() - 1){
				cout << ",";
			}
		}
		cout << endl;
	}
	return 0;
}