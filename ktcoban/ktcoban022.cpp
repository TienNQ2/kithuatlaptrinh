#include<bits/stdc++.h>
using namespace std;
long long tongSoHop(int x,int y,int m){
    int soHopMuaBangTien = m/x;
    long long tongSoHop = soHopMuaBangTien;
    while(soHopMuaBangTien>=y){
        int soHopDoiBangQua = soHopMuaBangTien/y;
        tongSoHop += soHopDoiBangQua;
        soHopMuaBangTien = soHopMuaBangTien%y +soHopDoiBangQua;
    }
    return tongSoHop;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int X,Y,M;
        cin>>X>>Y>>M;
        cout<<tongSoHop(X,Y,M)<<endl;
        
    }
}