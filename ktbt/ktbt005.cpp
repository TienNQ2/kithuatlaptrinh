#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void inthuong(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		inthuong(s);
		vector<int> L(s.size(), 1);
		for(int i = 0; i < s.size(); i++){
			for(int j = 0; j < i; j++){
				if(s[i] > s[j]){
					L[i] = max(L[i], L[j] + 1);
				}
			}
		}
		cout << *max_element(L.begin(), L.end()) << endl;
	}
	return 0;
}