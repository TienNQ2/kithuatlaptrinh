#include<bits/stdc++.h>
using namespace std;
int thayBang3 (int n){
    int soMoi = 0;
    int dem=0;
    while(n>0){
        if(n%10==5)
            soMoi = soMoi +3*pow(10,dem);
        else
            soMoi = soMoi + (n%10)*pow(10,dem);
        n/=10;
        dem++;
    }
    return soMoi;
}
int thayBang5(int n){
    int soMoi = 0;
    int dem=0;
    while(n>0){
        if(n%10==3)
            soMoi = soMoi +5*pow(10,dem);
        else
            soMoi = soMoi + (n%10)*pow(10,dem);
        n/=10;
        dem++;
    }
    return soMoi;
}
int sumMax(int a,int b){
    return thayBang5(a)+thayBang5(b);
}
int sumMin(int a,int b){
    return thayBang3(a)+thayBang3(b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<sumMin(a,b)<<" "<<sumMax(a,b)<<endl;
    }
}