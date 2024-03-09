#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &a, int k){
    int n = a.size();
    int cnt = 0;
    deque<int> dq;								//Luu so lan da doi bit truoc day
    for(int i = 0; i < n; i++){					
        if(!dq.empty() && i - dq.front() >= k){
            dq.pop_front();
        }
        if(dq.size() % 2 == a[i]){				//Vi du neu ban gap so 0 thi cho day phai doi
            if(i + k > n){						//Va trong khoang k phan tu tiep gap so 1 thi cho day cung can doi
                return -1;						//vi truoc day da doi 1 lan thi tu 1 thanh 0 nen se can them 1 lan doi nua
            }
            dq.push_back(i);
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    	string s;
    	int n;
    	cin >> s >> n;
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
    	cout << solve(v, n) << endl;
	}
    return 0;
}