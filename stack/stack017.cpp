#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		string res = "";
		for(int i = 0; i < s.size(); i++){
			if(!isdigit(s[i])){
				res += s[i];
			}
			else{
				int num = s[i] - '0';
				string tmp = res;
				for(int i = 1; i <= num - 1; i++){
					res.append(tmp);
				}
			}
		}
		k--;
		cout << res[k] << endl;
	}
	return 0;
}