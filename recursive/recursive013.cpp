#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int find(vector<int> &n, int l, int r){
	if(n[l] != l){
		return l;
	}
	if(l == r){
		return l + 1;
	}
	find(n, l + 1, r);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s.size() == 0){
			cout << "0\n";
		}
		else{
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
			cout << find(v, 0, v.size() - 1) << endl;
		}
	}
	return 0;
}