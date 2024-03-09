#include<bits/stdc++.h>
using namespace std;
int soChuSo(long long n){
    int dem =0;
    while(n>0){
        dem++;
        n/=10;
    }
    return dem;
}
long long tongChuSo(long long n){
    int luyThua = soChuSo(n);
    long long soMoi = 0;
    while(n>0){
        soMoi = soMoi + pow(n%10,luyThua);
        n/=10;
    }
    return soMoi;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(tongChuSo(n)==n)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}