#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a>=b){
            swap(a,b);
        }
        long long dem[10]={0};
        if(a==0)
            dem[0]++;
       for(int i=a;i<=b;i++){
           int j=i;
           while(j>0){
               dem[j%10]++;
               j/=10;
           }
       }
        for(int i=0;i<10;i++){
            cout<<dem[i]<<" ";
        }
        cout<<endl;
    }
}