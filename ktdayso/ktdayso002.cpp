#include<bits/stdc++.h>
using namespace std;
int n,k,S;
int a[30];
bool check[30];
int dem,sum;
vector<int> z;
void input(){
    cin>>n>>k>>S;
    for(int i=0;i<n;i++) cin>>a[i];
    memset(check,0,sizeof(check));
    dem=0,sum=0;
}
void Try(int i){
    for(int j=i;j<n;j++){
        if(check[j]==0){
            check[j]=1;
            sum+=a[j];
            k--;
            if(k==0) z.push_back(sum);
            else Try(j+1);
            sum-=a[j];
            check[j]=0;
            k++;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        input();
        Try(0);
        for(int i=0;i<z.size();i++){
            if(z[i]==S)
                dem++;
        }
        cout<<dem<<endl;
        z.clear();
    }
}