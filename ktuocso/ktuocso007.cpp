#include<bits/stdc++.h>
using namespace std;
vector<long long> check(long long n){
    vector<long long> luu;
    for(long long i=1;i<=sqrt(n);i++){
        if(n%i==0){
            luu.push_back(i);
            if(n/i!=i) luu.push_back(n/i);
        }
    }
    return luu;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        vector<long long> luu=check(n);
        long long sum =0;
        for(long long i=0;i<luu.size();i++){
            if(m%luu[i]!=0)
                sum+=luu[i];
        }
        cout<<sum<<endl;
    }
}