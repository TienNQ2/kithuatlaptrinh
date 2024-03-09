#include <bits/stdc++.h>
using namespace std;

int soBuoc(int n) {
    unordered_map<int, int> dp;
    queue<int> q;
    q.push(n);
    dp[n] = 0;
    
    while (!q.empty()) {
        int luuSo = q.front();
        q.pop();
        
        if (luuSo == 0) {
            return dp[0];
        }
        
        if (luuSo % 2 == 0 && dp.find(luuSo / 2) == dp.end()) {
            q.push(luuSo / 2);
            dp[luuSo / 2] = dp[luuSo] + 1;
        }
        
        if (luuSo % 3 == 0 && dp.find(luuSo / 3) == dp.end()) {
            q.push(luuSo / 3);
            dp[luuSo / 3] = dp[luuSo] + 1;
        }
        
        int soCan = sqrt(luuSo);
        if (soCan * soCan == luuSo && dp.find(soCan) == dp.end()) {
            q.push(soCan);
            dp[soCan] = dp[luuSo] + 1;
        }
        
        if (dp.find(luuSo - 1) == dp.end()) {
            q.push(luuSo - 1);
            dp[luuSo - 1] = dp[luuSo] + 1;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << soBuoc(n) << endl;
    }
}