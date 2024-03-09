#include<bits/stdc++.h>
using namespace std;
int decimal_to_binary(int n){
    if(n==0){
        return 1;
    }
    int dem = 0;
    while(n>0){
        if(n%2==0) dem++;
        n/=2;
    }
    return dem;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count =0;
        for(int i=0;i<=n;i++){
            if(decimal_to_binary(i)==k)
                count++;
        }
        cout<<count<<endl;
    }
}