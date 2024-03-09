
#include<bits/stdc++.h>
using namespace std;
long long bds(int n){
    vector<long long> dp(n+1,0);
    dp[0]=1;
    int i=1;
    while(pow(i,2)<=n){
        int power = pow(i,2);
        for(int j=power;j<=n;j++){
            dp[j]+=dp[j-power];

        }
        i++;
    }
    return dp[n];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<bds(n)<<endl;
    }
}