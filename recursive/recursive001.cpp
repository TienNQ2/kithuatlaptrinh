#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll tong(vector<int> &v, int l){
	if(l == v.size()){
		return 0;
	}
	return tong(v, l + 1) + v[l];
}

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
		vector<int> v;
		stringstream ss(s);
		string token;
		while(ss >> token){
			int num = stoi(token);
			v.push_back(num);
		}
		cout << tong(v, 0) << endl;
	}
	return 0;
}