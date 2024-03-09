#include<bits/stdc++.h>

using namespace std;

map<string, int> count(string &s){
    stack<map<string, int>> stk;
    map<string, int> mp;
    int i = 0;
    while(i < s.size()){
        if(isupper(s[i])){
            string name = "";
            name += s[i];
            i++;
            while(i < s.size() && islower(s[i])){
                name += s[i];
                i++;
            }
            string cnt = "";
            while(i < s.size() && isdigit(s[i])){
                cnt += s[i];
                i++;
            }
            int dem = 1;
            if(!cnt.empty()){
                dem = stoi(cnt);
            }
            mp[name] += dem;
        } 
		else if(s[i] == '('){
            stk.push(mp);
            mp.clear();
            i++;
        } 
		else if(s[i] == ')'){
            string count = "";
            i++;
            while(i < s.size() && isdigit(s[i])){
                count += s[i];
                i++;
            }
            int dem = 1;
            if(!count.empty()){
                dem = stoi(count);
            }
            map<string, int> tmp = mp;
            for(auto &x : tmp){
                x.second *= dem;
            }
            if(!stk.empty()){
                map<string, int> top = stk.top();
                stk.pop();
                for(auto &x : tmp){
                    top[x.first] += x.second;
                }
                mp = top;
            } 
			else{
                mp = tmp;
            }
        }
    }
    return mp;
}

string solve(string &s){
    map<string, int> mp = count(s);
    string res = "";
    for(auto &x : mp){
        res += x.first;
        if(x.second > 1){
            res += to_string(x.second);
        }
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	cout << solve(s) << endl;
	}
    return 0;
}