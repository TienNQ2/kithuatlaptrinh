#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void findFirstM(ll N, ll K, ll M){
    ll firstM;
    double y = (double)K * log10(N * 1.0);
    y = y - (ll)y;
    double temp = pow(10.0, y);
    firstM = temp * (1LL) * pow(10, M - 1);
    cout << firstM << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int N;
        int K,M;
        cin >> N >> K >> M;
        if(N==0)
            cout << "0";
        else
            findFirstM(N,K,M);
    }
    return 0;
}