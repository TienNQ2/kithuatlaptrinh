#include<bits/stdc++.h>
using namespace std;
bool check(long long a[],int n){
    if(n==1)
        return true;
    long long congSai = a[1]-a[0];
    for(int i=2;i<n;i++){
        if(a[i]-a[i-1]!=congSai)
            return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[1000001];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(check(a,n)==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}