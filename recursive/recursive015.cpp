#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ','){
				s[i] = ' ';
			}
		}
		stringstream ss(s);
		string token;
		vector<int> v;
		while(ss >> token){
			int num = stoi(token);
			v.push_back(num);
		}
		ll tich = 1;
		for(int x : v){
			tich *= x;
		}
		for(int i = 0; i < v.size(); i++){
			int ans = tich / v[i];
			cout << ans;
			if(i != v.size() - 1){
				cout << ",";
			}
		}
		cout << endl;
	}
	return 0;
}