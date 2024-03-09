#include<bits/stdc++.h>
using namespace std;
bool nto(long long n){
    if(n==0||n==1)
        return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
bool check(int n){
    if(n==0||n==1)
        return false;
    while(n>0){
        int soDu = n%10;
        if(soDu==0||soDu==1||soDu==4||soDu==6||soDu==8||soDu==9)
            return false;
        n/=10;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long count = 0;
        for(int i=2;i<=n;i++){
            if(check(i)==true&&nto(i)==true)
                count++;
        }
        cout<<count<<endl;
    }
}