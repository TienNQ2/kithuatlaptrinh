#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long  n ;
        cin >> n ;
        long long sum =1;
        for(long long i = 2 ;i*i<=n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
                if(i!=n/i){
                sum+=n/i;}
            }
        }
        cout << sum << endl;
    }
    return 0;
}
