#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> &prices){
    vector<int> ans(prices.size(), 0);
    stack<int> stk;  
    for(int i = 0; i < prices.size(); i++){
        while(!stk.empty() && prices[i] <= prices[stk.top()]){
            int j = stk.top();
            stk.pop();
            ans[j] -= prices[i];  
        }
        stk.push(i);  
        ans[i] = prices[i];
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string s;
    	getline(cin, s);
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
		vector<int> ans = solve(v);
		for(int i = 0; i < ans.size(); i++){
			cout << ans[i];
			if(i != ans.size() - 1){
				cout << ",";
			}
		} 
		cout << endl;
	}
    return 0;
}