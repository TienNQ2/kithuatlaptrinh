#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
vector<vector<long long>> nhan2MaTran(vector<vector<long long>> A,vector<vector<long long>> B){
    int n = A.size();
    int m = B[0].size();
    int p = B.size();
    vector<vector<long long>> C(n,vector<long long>(m,0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < p; ++k) {
                C[i][j] += A[i][k] * B[k][j];
                C[i][j] = (C[i][j])%mod;
            }
        }
    }

    return C;
}
vector<vector<long long>> matrix_power(vector<vector<long long>> A, int k ) {
    int n = A.size();
    if (k == 1) {
        return A;
    }
    if (k % 2 == 0) {
        vector<vector<long long>> half_pow = matrix_power(A, k / 2);
        return nhan2MaTran(half_pow, half_pow);
    } else {
        vector<vector<long long>> half_pow = matrix_power(A, (k - 1) / 2);
        vector<vector<long long>> result = nhan2MaTran(half_pow, half_pow);
        return nhan2MaTran(result, A);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<long long>> A(n,vector<long long>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                long long x;
                cin>>x;
               A[i][j]=x;
            }
        }
        vector<vector<long long>> result = matrix_power(A,k);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}