
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void Try(int i, int s, int n, vector<int>& x) {
    if (i > n || s > n) return;
    if (s == n) {
        res.push_back(x);
        return;
    }

    for (int j = i; j <=n/2 ; j++) {
        if(s * j > n) return ;
        if (n % j == 0) {
            x.push_back(j);
            Try(j, s * j, n, x);
            x.pop_back();
        }
    }
}

void input(int n) {
    vector<int> x;
    Try(2, 1, n, x);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        res.clear();
        input(n);
        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
