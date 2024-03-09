#include<bits/stdc++.h>
using namespace std;
long long bienDoiDuong(long long a[],long long n){
    long long demSoAm = 0;
    long long demSoDuong =0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
            return -1;
        else{
            if(a[i]<0)
                demSoAm++;
            else
                demSoDuong++;
        }
    }
    return min(demSoAm,demSoDuong);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a[100001];
        long long n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<bienDoiDuong(a,n)<<endl;
    }
}