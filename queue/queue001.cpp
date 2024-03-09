#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int> mp;
		for(int i = 0; i < s.size(); i++){
			mp[s[i]]++;
		}
		int find = 0;
		int idx = 0;
		for(int i = 0; i < s.size(); i++){
			if(mp[s[i]] == 1){
				find = 1;
				idx = i;
				break;
			}
		}
		if(!find){
			cout << "-1\n";
		}
		else{
			cout << idx << endl;
		}
	}
	return 0;
}