#include<bits/stdc++.h>
using namespace std;
long long tongUocSo(int n){
    int sum = 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        sum+=i+n/i;
        if(i*i==n)
        sum-=i;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        
        if(tongUocSo(b)==a&&tongUocSo(a)==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}