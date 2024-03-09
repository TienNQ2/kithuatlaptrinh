#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> mymap;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mymap[a[i]]++;
        }
        int scd = 0;
        for(int i = 0; i < n; ++i) {
            if (mymap[a[i]] == 1) {
                scd++;
            }
        }
        cout << scd << endl;
    }
    return 0;
}