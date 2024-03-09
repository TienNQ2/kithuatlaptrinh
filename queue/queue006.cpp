#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int idx = s.find(" ");
		string tmp = s.substr(idx + 1);
		int num = stoi(tmp);
		s.erase(idx);
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ','){
				s[i] = ' ';
			}
		}
		stringstream ss(s);
		string token;
		vector<int> v;
		while(ss >> token){
			int number = stoi(token);
			v.push_back(number);
		}
		int k = num;
		deque<int> dq;
		vector<int> res;
		for(int i = 0; i < v.size(); i++){
			if(!dq.empty() && i - dq.front() + 1 > k) dq.pop_front();
        	while(!dq.empty() && v[i] > v[dq.back()]) dq.pop_back();
        	dq.push_back(i);
        	if(i >= k - 1) res.push_back(v[dq.front()]);
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